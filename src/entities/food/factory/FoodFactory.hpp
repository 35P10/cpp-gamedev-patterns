#ifndef FOODFACTORY_H
#define FOODFACTORY_H

#include "core/Coordinate.h"
#include "entities/food/Food.hpp"

class FoodFactory {
public:
    FoodFactory() {};
    Food generateFoodInPosition(Coordinate new_coordinate);
};

#endif // FOODFACTORY_H