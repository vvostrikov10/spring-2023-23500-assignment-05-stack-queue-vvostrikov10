#pragma once
#include <iostream>
#include "Node.h"

class BSTree{
    private:
        Node *root;
    public:
        BSTree();
        void insert(int d);
        std::string get_debug_string();
        void setup();
};