#include "entities/snake/Snake.h"

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

void Snake::stepForward() {
    DataNode head = body->getFront();
    switch (direction)
    {
    case DIR_RIGHT:
        head.position.addInX(1);
        break;
    case DIR_LEFT:
        head.position.addInX(-1);
        break;
    case DIR_UP:
        head.position.addInY(1);
        break;
    case DIR_BOTTOM:
        head.position.addInY(-1);
        break;
    default:
        break;
    }
    body->pushFront(head);
    body->popBack();
}