#ifndef SERVICESCONFIG
#define SERVICESCONFIG

#include "integration/IntegrationFactory.h"
#include "entities/game/Game.hpp"

class GameBuilder
{
public:
    Ilist* list;
    Snake* snake;
    Game* _gameController;

    GameBuilder() {
        IntegrationFactory infraService;

        list = infraService.list;
        snake = new Snake(list);
        _gameController = new Game(infraService.inputController,snake, infraService.graphics);
    };
    ~GameBuilder() {};

    Snake scope() {
        Ilist* temp = list->clone();
        return Snake(temp);
    }
};

#endif // SERVICESCONFIG
