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
    Food(std::string newtype, Coordinate new_position);
    Coordinate getPosition();
    ~Food();
};

#endif // FOOD_H