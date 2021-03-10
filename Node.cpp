//
// Created by Richmond on 1/3/2021.
//

#include "Node.h"

#include <iostream>
#include <stdlib.h>


using namespace std;

Node::Node() {

}
/// Constructor
/// \param x value node
Node::Node(int x) {
    this->value = x;
    this->next = nullptr;

}
/// Connect node with the next
/// \param n node
void Node::ConnectNext(Node* n) {
    next = n;
}

/// Return next
/// \return Node
Node* Node::GetNext() {
    return next;
}

/// Return node value
/// \return Int
int Node::GetValue() {
    return value;
}


/// Generate a new Node
/// \param size Int
/// \param c instance collector
/// \return pointer Node
void* Node::operator new(size_t size, Collector* c) {

    if (c->GetSize() != 0){
        return c->DeleteFirst();
    }

    void *p =::new Node();
    return p;

}
/// free memory space
/// \param p pointer (void*)
void Node::operator delete (void* p){
    free(p);
}

