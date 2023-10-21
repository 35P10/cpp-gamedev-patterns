#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>

#include "domain/models/DataNode.h"
#include "domain/contracts/Ilist.h"
#include "Node.h"

class LinkedList : public Ilist {
public:
    LinkedList();
    LinkedList(DataNode x);
    Ilist* clone() override {
        LinkedList* newList = new LinkedList();
        return newList;
    }
    void insert(DataNode x,int posicion);
    void remove(int posicion); 

    void pushFront(DataNode data) override;
    void pushBack(DataNode data) override;
    DataNode getFront() override;
    void popFront() override;
    void popBack() override;
    int search(DataNode data) override;
    int getSize() override;
    void print() override;

private:
    Node<DataNode> *head;
    int size;
};

#endif // LINKEDLIST_H
