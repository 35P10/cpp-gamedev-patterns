#include "GraphicASCII.hpp"

GraphicASCII::GraphicASCII() : levelMap() {}


void GraphicASCII::setEntities(Level* level) {
    if (level) {
        level->getMap(levelMap);
    }

}

void GraphicASCII::render() {
    std::cout << "\033c"; 

    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            std::cout << levelMap[i][j] << " ";
        }
        std::cout << std::endl;
    }

}