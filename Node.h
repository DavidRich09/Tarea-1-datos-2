//
// Created by Richmond on 1/3/2021.
//



#ifndef TAREA_NODE_H
#define TAREA_NODE_H


#include <iostream>
#include <stdlib.h>

#include "Collector.h"




class Node {

    Node();

    int value;
    Node* next;


public:

    Node(int);
    Node* GetNext();
    int GetValue();

    void ConnectNext(Node *n);
    void* operator new(size_t size, Collector* c);
    void operator delete (void* p);


};


#endif //TAREA_NODE_H
