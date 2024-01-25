#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
#include <fstream>

class Coordinate {
private:
    int x = 0;
    int y = 0;
    int z = 0;
public:
    Coordinate();
    Coordinate(int, int, int);
    Coordinate(int, int);
    ~Coordinate();
    void setX(int);
    void setY(int);
    void setZ(int);
    int getX() const;
    int getY() const;
    int getZ() const;
    void addInX(int);
    void addInY(int);
    void addInZ(int);

    Coordinate& operator=(const Coordinate& other);

    friend bool operator==(const Coordinate& lhs, const Coordinate& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord);
};

#endif // COORDINATE_H