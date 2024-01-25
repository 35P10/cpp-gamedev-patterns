#ifndef IGRAPHIC_H
#define IGRAPHIC_H

#include "entities/level/Level.hpp"

class IGraphic {
public:
    virtual void setEntities(Level* level) = 0;
    virtual void render() = 0;
};

#endif // IGRAPHIC_H