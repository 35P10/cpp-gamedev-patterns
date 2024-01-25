#include "entities/food/factory/FoodFactory.hpp"

Food FoodFactory::generateFoodInPosition(Coordinate new_coordinate) {
    return Food("Banana", new_coordinate);
}