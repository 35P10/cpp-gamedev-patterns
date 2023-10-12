#ifndef ILIST_H
#define ILIST_H

#include "domain/models/DataNode.h"

class Ilist {
public:
    virtual void pushBack(DataNode data) = 0;
    virtual void remove(int posicion) = 0;
    virtual int search(DataNode data) = 0;
    virtual int getSize() = 0;
    virtual void print() = 0;
};

#endif // ILIST_H
