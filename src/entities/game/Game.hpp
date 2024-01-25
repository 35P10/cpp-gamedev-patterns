
#ifndef GAME_H
#define GAME_H
#include <conio.h>

#include "contracts/IInputController.h"
#include "entities/snake/Snake.h"
#include "entities/level/Level.hpp"
#include "contracts/IGraphics.h"

class Game
{
private:
    IInputController* input;
    IGraphic* graphic;
    Snake* snake;
    Level* level;
public:
    Game(IInputController* newInput, Snake* newSnake, IGraphic* newGraphic);
    ~Game();

    bool checkInput();
    void snakeEntity();
    void render();
};

#endif // GAME_H