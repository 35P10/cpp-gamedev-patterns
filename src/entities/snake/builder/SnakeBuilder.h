#ifndef SNAKEBUILDER_H
#define SNAKEBUILDER_H

#include "core/Coordinate.h"
#include "core/DataNode.h"
#include "contracts/Ilist.h"

class SnakeBuilder {
private:
    Coordinate startPosition = Coordinate(2,2,0);
    int bodyLong = 3;
public:
    SnakeBuilder() {};

    void BuildBody(Ilist* &body);
};

#endif // SNAKEBUILDER_H