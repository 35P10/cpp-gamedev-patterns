#include "GraphicASCII.hpp"

GraphicASCII::GraphicASCII() : levelMap() {}


void GraphicASCII::setEntities(Level* level) {
    if (level) {
        level->getMap(levelMap);
        food = level->getFood();
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

    levelMap[food->getPosition().getX()][food->getPosition().getY()] = 2;

    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}