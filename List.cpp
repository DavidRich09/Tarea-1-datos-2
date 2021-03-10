//
// Created by Richmond on 1/3/2021.
//

#include "List.h"


#include <iostream>
#include <stdlib.h>

using namespace std;

/// Constructor
List::List() {

    size = 0;
    head = nullptr;
    collector = new Collector();

}

/// Add in first position
/// \param value Int
void List::AddFirst(int value) {

    if (head == nullptr){
        head = new(collector) Node(value);
    } else {
        Node* temp = head;
        Node* newNode = new(collector)  Node(value);
        newNode->ConnectNext(temp);
        head = newNode;
    }
    size++;

}

/// Add in last position
/// \param value int
void List::AddLast(int value) {

    Node *newNode = new(collector)  Node(value);
    newNode->ConnectNext(nullptr);
    if (size == 0){
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->GetNext() != nullptr){
            temp = temp->GetNext();
        }
        temp->ConnectNext(newNode);
    }
    size++;
}

/// Print every node in list
void List::ListPrint() {
    Node* temp = head;
    while (temp != nullptr){
        cout << temp->GetValue() << " -> ";
        temp = temp->GetNext();
    }
}

/// Delete first node in list
/// \return Int
int List::DeleteFirst() {
    if (head != nullptr){
        Node* temp = head;
        head = head->GetNext();
        size--;
        collector->AddFirst((void*) temp);
        delete temp;
        return 0;
    } else {
        return 0;
    }
}

/// Delete last node in list
/// \return Int
int List::DeleteLast() {
    Node* temp = head;
    while (temp->GetNext()->GetNext() != nullptr){
        temp = temp->GetNext();
    }
    size--;
    collector->AddFirst((void*) temp->GetNext());
    temp->ConnectNext(nullptr);
    delete temp->GetNext();
    return 0;
}

/// Print every position in memory
void List::ListMemory() {
    Node* temp = head;
    while (temp != nullptr){
        cout << temp << " -> ";
        temp = temp->GetNext();
    }
}

int List::CollectorMemory() {
    return collector->GetSize();

}