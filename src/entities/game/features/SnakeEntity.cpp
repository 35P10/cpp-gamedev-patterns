#include "entities/game/Game.hpp"

void Game::snakeEntity() {
    snake->stepForward();
    snake->print();
}