#ifndef ASCIIGRAPHIC_H
#define ASCIIGRAPHIC_H

#include "contracts/IGraphics.h"
#include <iostream>
#include <thread>

class GraphicASCII : public IGraphic {
private:
    int levelMap[20][20];
    Food* food;

public:
    GraphicASCII();
    ~GraphicASCII();

    void setEntities(Level* level);
    void render() override;
};

#endif // ASCIIGRAPHIC_H