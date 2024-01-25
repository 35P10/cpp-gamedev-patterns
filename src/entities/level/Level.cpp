#include "Level.hpp"

Level::Level() {
    generateFood();
    ;
}

void Level::generateFood() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));  

    int x;
    int y;
    do {
        x = (std::rand() % 18) + 1;
        y = (std::rand() % 18) + 1;
    }
    while ( map[x][y] == MAPREPR_WALL );

    food = foodFactory.generateFoodInPosition(Coordinate(x,y)); 

}

Level::Level(int map_representation[18][18]) {
    ;
}