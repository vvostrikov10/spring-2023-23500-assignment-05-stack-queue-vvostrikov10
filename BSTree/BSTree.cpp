#include "BSTree.h"
#include "Node.h"
#include <iostream>

BSTree::BSTree(){
    root = nullptr;
}

void BSTree::insert(int d){

}

std::string BSTree::get_debug_string(){
    if (root == nullptr){
        return "";
    }
    else{
        std::string ans = std::to_string(root->getData());
        if (root->getLeft() != nullptr){
            ans += "\n" + root->getLeft()->get_debug_string();
        }
        if (root->getRight() != nullptr){
            ans += "\n" + root->getRight()->get_debug_string();
        }
        return ans;
    }
}
void BSTree::setup(){
    Node *n = new Node(10);
    root = n;
    n = new Node(20);
    root->setLeft(n);
    n = new Node(30);
    root->setRight(n);
    n = new Node(40);
    root->getLeft()->setLeft(n);
} 