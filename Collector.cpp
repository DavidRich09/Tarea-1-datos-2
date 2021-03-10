//
// Created by Richmond on 7/3/2021.
//

#include "Collector.h"

/// Constructor
Collector::Collector() {
    listPointer = new ListPointer();
}

/// Returns the number of elements
/// \return Int
int Collector::GetSize() {
    return listPointer->GetSize();
}
/// Delete firt element of ListPointer
/// \return void*
void* Collector::DeleteFirst() {
    return listPointer->DeleteFirst();
}

/// Add node at listPointer
/// \param pNode void*
void Collector::AddFirst(void *pNode) {
    listPointer->AddFirst(pNode);
}