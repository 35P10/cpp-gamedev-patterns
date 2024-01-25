#include "./Game.hpp"

Game::Game(IInputController* newInput, Snake* newSnake, IGraphic* newGraphic) {
    input = newInput;
    snake = newSnake;
    graphic = newGraphic;
    level = new Level();
    graphic->setEntities(level);
}

Game::~Game() {};
