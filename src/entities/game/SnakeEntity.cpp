#include "entities/game/GameController.h"

void GameController::snakeEntity() {
    snake->stepForward();
    snake->print();
}