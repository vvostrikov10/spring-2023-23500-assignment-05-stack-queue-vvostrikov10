#include <iostream>
#include "Node.h"
#include "BSTree.h"
int main()
{
    Node *n = new Node(10);
    Node *n2 = new Node(20);
    n->setLeft(n2);
    Node *n3 = new Node(30);
    n2->setLeft(n3);
    n2 = n3;
    n3 = new Node(40);
    n2->setLeft(n3);
    n2 = new Node(50);
    n->setRight(n2);
    n3 = new Node(60);
    n2->setLeft(n3);
    n3 = new Node(70);
    n2->setRight(n3);
    std::cout << n->getData() << "\n";
    std::cout << n->getLeft()->getData() << "\n";
    std::cout << n->getLeft()->getLeft()->getData() << "\n";
    std::cout << n->getLeft()->getLeft()->getLeft()->getData() << "\n";
    std::cout << n->getRight()->getData() << "\n";
    std::cout << n->getRight()->getLeft()->getData() << "\n";
    std::cout << n->getRight()->getRight()->getData() << "\n";

    BSTree *t = new BSTree();
    t->setup();
    std::cout << t->get_debug_string() << "\n";


    return 0;
}