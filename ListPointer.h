//
// Created by Richmond on 6/3/2021.
//

#ifndef TAREA_LISTPOINTER_H
#define TAREA_LISTPOINTER_H
#include "NodePointer.h"



class ListPointer {

public:
    NodePointer* head;
    int size;

    ListPointer();
    void AddFirst(void*);
    void* DeleteFirst();
    int GetSize();


};


#endif //TAREA_LISTPOINTER_H
