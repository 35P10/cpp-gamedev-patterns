#ifndef INTRAESTRUCTURESERVICES
#define INTRAESTRUCTURESERVICES

#include "contracts/Ilist.h"
#include "contracts/IInputController.h"

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