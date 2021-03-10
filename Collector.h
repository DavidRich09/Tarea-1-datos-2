//
// Created by Richmond on 7/3/2021.
//

#ifndef TAREA_COLLECTOR_H
#define TAREA_COLLECTOR_H

#include "ListPointer.h"


class Collector {

public:

    ListPointer* listPointer;
    int size;

    Collector();
    int GetSize();
    void* DeleteFirst();
    void AddFirst(void *pNode);


};


#endif //TAREA_COLLECTOR_H
