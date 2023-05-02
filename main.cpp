#include <iostream>
#include "IntNode.h"
#include "Stack.h"
#include "Queue.h"

int main(){
    Stack *a = new Stack();
    std::cout << "Stack\n";
    a->push(1);
    a->push(2);
    std::cout << a->pop() << std::endl;
    a->push(3);
    std::cout << a->top() << std::endl;
    std::cout << a->pop() << std::endl;
    std::cout << a->pop() << std::endl;
    std::cout << a->is_empty() << std::endl;
    Queue *b = new Queue();
    std::cout << "Queue\n";
    std::cout << b->is_empty() << std::endl;
    b->enqueue(1);
    b->enqueue(2);
    b->enqueue(3);
    b->enqueue(4);
    b->enqueue(5);
    b->enqueue(6);
    std::cout << b->is_full() << std::endl;
    std::cout << b->front() << std::endl;
    std::cout << b->dequeue() << std::endl;
    std::cout << b->dequeue() << std::endl;

    

}