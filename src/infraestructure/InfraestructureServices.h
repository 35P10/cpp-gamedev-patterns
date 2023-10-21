#ifndef INTRAESTRUCTURESERVICES
#define INTRAESTRUCTURESERVICES

#include "domain/contracts/Ilist.h"
#include "controller/contracts/IInputController.h"

class InfraestructureServices {
public:
    Ilist* List;
    IInputController* InputController;

    InfraestructureServices(Ilist* list, IInputController* inputController)
        : List(list), InputController(inputController) {
    };

    ~InfraestructureServices() {
    };
};

#endif // INTRAESTRUCTURESERVICES