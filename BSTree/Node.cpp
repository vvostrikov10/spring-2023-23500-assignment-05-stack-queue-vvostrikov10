#include "Node.h"

Node::Node() {
  data = 0;
  left = nullptr;
  right = nullptr;
}

Node::Node(int data){
  this->data = data;
  left = nullptr;
  right = nullptr;
}

Node::Node(int data, Node *l, Node *r){
  this->data = data;
  left = l;
  right = r;
}

int Node::getData(){
  return data;
}

Node * Node::getLeft(){
  return left;
}

Node * Node::getRight(){
  return right;
}

void Node::setData(int d){
  data = d;
}

void Node::setLeft(Node *l){
  left = l;
}

void Node::setRight(Node *r){
  right = r;
  
}

std::string Node::get_debug_string(){

    std::string ans = std::to_string(getData());
    if (getLeft() != nullptr){
        ans += "\n" + getLeft()->get_debug_string();
    }
    if (getRight() != nullptr){
        ans += "\n" + getRight()->get_debug_string();
    }
    return ans;
}