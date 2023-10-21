#include "controller/GameController.h"

void GameController::snakeEntity() {
    snake->stepForward();
    snake->print();
}