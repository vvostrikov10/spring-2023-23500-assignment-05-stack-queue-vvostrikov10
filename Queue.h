#pragma once
#include "IntNode.h"
#define QUEUE_ERR_EMPTY 1
#define QUEUE_ERR_FULL 2
#define SIZE 6

class Queue{
    private:
        int arr[SIZE];
        int head;
        int tail;
        bool empty;
        bool full;
    public:
        Queue();
        ~Queue();
        void enqueue(int a);
        int dequeue();
        int front();
        bool is_empty();
        bool is_full();
};