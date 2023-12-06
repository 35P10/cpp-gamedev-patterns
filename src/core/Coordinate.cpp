#include "Coordinate.h"

Coordinate::Coordinate() { }

Coordinate::Coordinate(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Coordinate::setX(int newX) {
    this->x = newX;
}

int Coordinate::getX() const {
    return this->x;
}

int Coordinate::getY() const {
    return this->y;
}

int Coordinate::getZ() const {
    return this->z;
}

void Coordinate::addInX(int add) {
    this-> x += add;
}

void Coordinate::addInY(int add) {
    this-> y += add;
}

void Coordinate::addInZ(int add) {
    this-> z += add;
}

Coordinate::~Coordinate() {}

bool operator==(const Coordinate& lhs, const Coordinate& rhs) {
    return (lhs.x == rhs.x) && (lhs.y == rhs.y) && (lhs.z == rhs.z);
}

std::ostream& operator<<(std::ostream& os, const Coordinate& coord) {
    os << "Coordinate(" << coord.getX() << ", " << coord.getY() << ", " << coord.getZ() << ")";
    return os;
}

Coordinate& Coordinate::operator=(const Coordinate& other) {
    if (this == &other) {
        return *this;
    }

    this->x = other.x;
    this->y = other.y;
    this->z = other.z;

    return *this;
}