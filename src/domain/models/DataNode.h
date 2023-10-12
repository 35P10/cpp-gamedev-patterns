#ifndef DATANODE_H
#define DATANODE_H

#include "Coordinate.h"

class DataNode {
public:
    Coordinate position;

    DataNode();

    friend bool operator==(const DataNode& lhs, const DataNode& rhs);
    friend std::ostream& operator<<(std::ostream& os, const DataNode& datanode);
};

#endif // DATANODE_H