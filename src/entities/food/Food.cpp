#include "./Food.hpp"

Food::Food() {
    type = "Food";
    position  = Coordinate(0,0,0);
}

Food::Food(std::string newtype, Coordinate new_position): type(type), position(new_position) { }

Coordinate Food::getPosition() {
    return position;
}

Food::~Food() { }