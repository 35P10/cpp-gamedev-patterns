#ifndef ILIST_H
#define ILIST_H

#include "core/DataNode.h"

class Ilist {
public:
    virtual Ilist* clone() = 0;
    virtual void pushFront(DataNode data) = 0;
    virtual void pushBack(DataNode data) = 0;
    virtual DataNode getFront() = 0;
    virtual void popFront() = 0;
    virtual void popBack() = 0;
    virtual int search(DataNode data) = 0;
    virtual int getSize() = 0;
    virtual void print() = 0;
};

#endif // ILIST_H
