#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>

#include "domain/models/DataNode.h"
#include "Node.h"

class LinkedList  {
public:
    LinkedList();
    LinkedList(DataNode x);
    int getSize() ;
    void insert(DataNode x,int posicion) ;
    void remove(int posicion) ;
    int search(DataNode x) ;
    void print() ;
private:
    Node<DataNode> *head;
    int size;
};

#endif // LINKEDLIST_H
