#include "IntNode.h"
#include "Queue.h"

Queue::Queue(){
    empty = true;
    full = false;
    head = 0;
    tail = 0;
}
void Queue::enqueue(int a){
    if(is_full()){
        throw QUEUE_ERR_FULL;
    }
    arr[tail] = a;
    tail = (tail + 1) % SIZE;
    if (tail == head) full = true;
    if (empty) empty = false;
}

int Queue::dequeue(){
    if(is_empty()){
        throw QUEUE_ERR_FULL;
    }
    int temp = head;
    head = (head + 1) % SIZE;
    if (tail == head) empty = true;
    if (full) full = false;
    return arr[temp];
}
int Queue::front(){
    if(is_empty()){
        throw QUEUE_ERR_FULL;
    }
    return arr[head];
}
bool Queue::is_empty(){
    return empty;
}
bool Queue::is_full(){
    return full;
}