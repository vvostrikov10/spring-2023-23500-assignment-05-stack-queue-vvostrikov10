#pragma once
#include "IntNode.h"
#define STACK_ERR_EMPTY 1

class Stack{
    private:
        IntNode *t;
    public:
        Stack();
        ~Stack();
        void push(int a);
        int pop();
        int top();
        bool is_empty();
};