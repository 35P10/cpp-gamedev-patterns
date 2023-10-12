#include "Coordinate.h"

Coordinate::Coordinate() { }

Coordinate::Coordinate(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Coordinate::setX(float newX) {
    this->x = newX;
}

float Coordinate::getX() const {
    return this->x;
}

float Coordinate::getY() const {
    return this->y;
}

float Coordinate::getZ() const {
    return this->z;
}

Coordinate::~Coordinate() {}

bool operator==(const Coordinate& lhs, const Coordinate& rhs) {
    return (lhs.x == rhs.x) && (lhs.y == rhs.y) && (lhs.z == rhs.z);
}

std::ostream& operator<<(std::ostream& os, const Coordinate& coord) {
    os << "Coordinate(" << coord.getX() << ", " << coord.getY() << ", " << coord.getZ() << ")";
    return os;
}