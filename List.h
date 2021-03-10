//
// Created by Richmond on 1/3/2021.
//

#ifndef TAREA_LIST_H
#define TAREA_LIST_H

#include "Node.h"
#include "Collector.h"



class List {

    Node* head;
    Collector* collector;


public:

    int size;

    List();
    void AddFirst(int);
    void AddLast(int);
    int DeleteFirst();
    int DeleteLast();
    void ListPrint();
    void ListMemory();
    int CollectorMemory();

};


#endif //TAREA_LIST_H
