//
// Created by Richmond on 6/3/2021.
//

#include "ListPointer.h"

/// Constructor
ListPointer::ListPointer() {
    size = 0;
    head = nullptr;
}

/// Add nodePointer in first position
/// \param node void*
void ListPointer::AddFirst(void* node) {

    if (head == nullptr){
        head = new NodePointer(node);
    } else{
        NodePointer* temp = head;
        NodePointer* newNode = new NodePointer(node);
        newNode->ConnectNext(temp);
        head = newNode;
    }
    size++;

}

/// Delete in first position
/// \return void*
void* ListPointer::DeleteFirst() {
    if (head != nullptr){
        NodePointer* temp = head;
        head = head->GetNext();
        size--;
        return temp->GetValue();
    }
    size--;
}

/// Return size in listPointer
/// \return Int
int ListPointer::GetSize() {
    return size;
}