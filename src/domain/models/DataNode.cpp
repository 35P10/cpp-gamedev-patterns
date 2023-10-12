#include "DataNode.h"

DataNode::DataNode() {
    position = Coordinate(0, 0, 0);
}

bool operator==(const DataNode& lhs, const DataNode& rhs) {
    return lhs.position == rhs.position;
}

std::ostream& operator<<(std::ostream& os, const DataNode& datanode) {
    os << datanode.position;
    return os;
}