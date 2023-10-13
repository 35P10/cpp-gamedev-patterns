#include "application/models/Snake.h"

void Snake::changeDirection_up() {
    this->direction = DIR_UP;
}

void Snake::changeDirection_bottom() {
    this->direction = DIR_BOTTOM;
}

void Snake::changeDirection_left() {
    this->direction = DIR_LEFT;
}

void Snake::changeDirection_right() {
    this->direction = DIR_RIGHT;
}