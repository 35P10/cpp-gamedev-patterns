#include "application/models/Snake.h"

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