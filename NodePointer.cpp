//
// Created by Richmond on 6/3/2021.
//

#include "NodePointer.h"

/// Constructor
/// \param node void*
NodePointer::NodePointer(void* node) {
    this->point = node;
    this->next = nullptr;
}

/// Connect with next node
/// \param n NodePointer*
void NodePointer::ConnectNext(NodePointer *n) {
    next = n;
}

/// Return next node
/// \return NodePointer*
NodePointer* NodePointer::GetNext() {
    return next;
}

/// Return the value
/// \return void*
void* NodePointer::GetValue() {
    return point;
}


