
#include "IntNode.h"
#include "Stack.h"

Stack::Stack(){
    t = nullptr;
}
Stack::~Stack(){
    IntNode *walker = t;
    IntNode *trailer = nullptr;
    while (walker != nullptr){
        trailer = walker;
        walker = walker ->getNext();
        delete trailer;
    }
    
}
void Stack::push(int a){
    //not sure how a linked list based stack can be full
    IntNode *n = new IntNode(a);
    n->setNext(t);
    t = n;
}

int Stack::pop(){
    if (is_empty()) throw STACK_ERR_EMPTY;
    int ans = t->getData();
    IntNode *temp = t->getNext();
    delete t;
    t = temp;
    return ans;
}
int Stack::top(){
    if (is_empty()) throw STACK_ERR_EMPTY;
    return t->getData();
}

bool Stack::is_empty(){
    return t == nullptr;
}