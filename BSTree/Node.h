#pragma once
#include <iostream>
class Node {
 private:
  int data;
  Node *left;
  Node *right;
 public:
  Node();
  Node(int data);
  Node(int d, Node *left, Node *right);
  int getData();
  Node *getLeft();
  Node *getRight();
  std::string get_debug_string();
  void setData(int d);
  void setLeft(Node *l);
  void setRight(Node *r);

};