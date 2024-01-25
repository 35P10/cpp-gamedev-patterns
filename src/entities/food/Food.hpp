#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include "core/Coordinate.h"

class Food
{
private:
    std::string type;
    Coordinate position;
public:
    Food();
    Food(Coordinate new_position);
    ~Food();
};

#endif // FOOD_H