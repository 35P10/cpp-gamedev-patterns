
#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include <conio.h>

#include "contracts/IInputController.h"
#include "entities/snake/Snake.h"

class GameController
{
private:
    IInputController* input;
    Snake* snake;
public:
    GameController(IInputController* newInput, Snake* newSnake);
    ~GameController();

    bool checkInput();
    void snakeEntity();
};

#endif // GAMECONTROLLER_H

