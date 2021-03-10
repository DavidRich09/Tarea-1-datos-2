//
// Created by Richmond on 6/3/2021.
//

#ifndef TAREA_NODEPOINTER_H
#define TAREA_NODEPOINTER_H



class NodePointer {

public:

    void* point;
    NodePointer* next;

    NodePointer(void*);
    NodePointer* GetNext();
    void* GetValue();
    void ConnectNext(NodePointer *n);


};


#endif //TAREA_NODEPOINTER_H
