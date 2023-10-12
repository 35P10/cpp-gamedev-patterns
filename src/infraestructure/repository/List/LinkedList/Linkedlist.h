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
    void insert(DataNode x,int posicion);

    void pushBack(DataNode data) override;
    void remove(int posicion) override; 
    int search(DataNode data) override;
    int getSize() override;
    void print() override;

private:
    Node<DataNode> *head;
    int size;
};

#endif // LINKEDLIST_H
