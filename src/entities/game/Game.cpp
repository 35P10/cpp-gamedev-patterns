#include "./Game.hpp"

Game::Game(IInputController* newInput, Snake* newSnake, IGraphic* newGraphic) {
    input = newInput;
    snake = newSnake;
    graphic = newGraphic;
    level = new Level();
    std::cout <<"OK";
    graphic->setEntities(level);
    std::cout <<"OK2";
}

Game::~Game() {};
