#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Stack.h"
#include "Queue.h"
#include "IntNode.h"
#include <iostream>

//Push and pop are hard to check individually without using the other function
TEST_CASE("<Stack::push and Stack::pop tests>"){
    Stack *a = new Stack();
    try{
        a->pop();
        CHECK(false);
    }
    catch (int err){
        CHECK(true);
    }
    a->push(1);
    CHECK(a->pop() == 1);
    a->push(2);
    a->push(3);
    CHECK(a->pop() == 3);
    CHECK(a->pop() == 2);
    delete a;
}

TEST_CASE("Stack::top tests"){
    Stack *a = new Stack();
    try{
        a->top();
        CHECK(false);
    }
    catch (int err){
        CHECK(true);
    }
    a->push(1);
    CHECK(a->top() == 1);
    a->pop();
    a->push(2);
    a->push(3);
    CHECK(a->top() == 3);
    a->pop();
    CHECK(a->top() == 2);
    delete a;
}

TEST_CASE("Stack::is_empty tests"){
    Stack *a = new Stack();
    CHECK(a->is_empty());
    a->push(1);
    a->push(2);
    a->push(3);
    CHECK(!(a->is_empty()));
    a->pop();
    a->pop();
    a->pop();
    CHECK(a->is_empty());
    delete a;
}

TEST_CASE("Queue::enqueue and Queue::dequeue tests"){
    Queue *a = new Queue();
    try{
        a->dequeue();
        CHECK(false);
    }
    catch (int err){
        CHECK(true);
    }
    a->enqueue(1);
    CHECK(a->dequeue() == 1);
    a->enqueue(2);
    a->enqueue(3);
    CHECK(a->dequeue() == 2);
    CHECK(a->dequeue() == 3);
}

TEST_CASE("Queue::front tests"){
    Queue *a = new Queue();
    try{
        a->front();
        CHECK(false);
    }
    catch (int err){
        CHECK(true);
    }
    a->enqueue(1);
    CHECK(a->front() == 1);
    a->dequeue();
    a->enqueue(2);
    a->enqueue(3);
    CHECK(a->front() == 2);
    a->dequeue();
    CHECK(a->dequeue() == 3);
}

TEST_CASE("Queue::is_empty tests"){
    Queue *a = new Queue();
    CHECK(a->is_empty());
    a->enqueue(1);
    a->enqueue(2);
    a->enqueue(3);
    CHECK(!(a->is_empty()));
    a->dequeue();
    a->dequeue();
    a->dequeue();
    CHECK(a->is_empty());
}

TEST_CASE("Queue::is_full tests"){
    Queue *a = new Queue();
    CHECK(!(a->is_full()));
    a->enqueue(1);
    a->enqueue(2);
    a->enqueue(3);
    a->enqueue(4);
    a->enqueue(5);
    a->enqueue(6);
    CHECK(a->is_full());
    a->dequeue();
    a->dequeue();
    CHECK(!(a->is_full()));
    a->enqueue(7);
    a->enqueue(8);
    CHECK(a->is_full());
}


