#ifndef INTEGRATIONFACTORY
#define INTEGRATIONFACTORY

#include "contracts/Ilist.h"
#include "contracts/IInputController.h"
#include "contracts/IGraphics.h"
#include "integration/List/LinkedList/Linkedlist.h"
#include "integration/InputControllers/Keyboard/KeyBoardController.h"
#include "integration/Graphics/ASCII/GraphicASCII.hpp"

class IntegrationFactory {
public:
    Ilist* list;
    IInputController* inputController;
    IGraphic* graphics;

    IntegrationFactory() {
        list = new LinkedList();
        inputController = new KeyBoardController();
        graphics = new GraphicASCII();
    };

    ~IntegrationFactory() {
    };
};

#endif // INTEGRATIONFACTORY