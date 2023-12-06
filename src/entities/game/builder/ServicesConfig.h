#ifndef SERVICESCONFIG
#define SERVICESCONFIG

#include "integration/List/LinkedList/Linkedlist.h"
#include "integration/InputControllers/Keyboard/KeyBoardController.h"
#include "integration/InfraestructureServices.h"
#include "entities/game/GameController.h"

class ServicesConfig
{
public:
    Ilist* list;
    Snake* snake;
    GameController* _gameController;

    ServicesConfig() {
        InfraestructureServices infraService(new LinkedList(), new KeyBoardController());

        list = infraService.List;
        snake = new Snake(list);
        _gameController = new GameController(infraService.InputController,snake);
    };
    ~ServicesConfig() {};

    Snake scope() {
        Ilist* temp = list->clone();
        return Snake(temp);
    }
};

#endif // SERVICESCONFIG
