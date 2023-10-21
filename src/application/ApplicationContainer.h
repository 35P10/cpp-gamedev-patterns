
#ifndef APPLICATIONCONTAINER
#define APPLICATIONCONTAINER

#include "domain/models/DataNode.h"
#include "application/models/Snake.h"
#include "domain/contracts/Ilist.h"
#include "infraestructure/InfraestructureServices.h"

class ApplicationContainer {
public:
    Ilist* list;
    Snake* snake;
    ApplicationContainer() : list(nullptr), snake(nullptr) {
        ;
    }
    ApplicationContainer(InfraestructureServices _container) {
        list = _container.List;
        snake = new Snake(list);
    }

    Snake scope() {
        Ilist* temp = list->clone();
        return Snake(temp);
    }
};

#endif // APPLICATIONCONTAINER
