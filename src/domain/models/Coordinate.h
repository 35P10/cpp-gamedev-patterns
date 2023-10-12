#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
#include <fstream>

class Coordinate {
private:
    float x = 0;
    float y = 0;
    float z = 0;
public:
    Coordinate();
    Coordinate(float, float, float);
    ~Coordinate();
    void setX(float);
    void setY(float);
    void setZ(float);
    float getX() const;
    float getY() const;
    float getZ() const;
    friend bool operator==(const Coordinate& lhs, const Coordinate& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord);
};

#endif // COORDINATE_H