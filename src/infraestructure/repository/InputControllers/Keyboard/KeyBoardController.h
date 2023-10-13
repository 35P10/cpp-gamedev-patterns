#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H

#include <iostream>
#include <map>

#include "controller/contracts/IInputController.h"

class KeyBoardController : public IInputController {
private:
    std::map<std::string, int> keyMap;

    std::string accept = "Enter";
    std::string pause = "Esc";
    std::string up = "ArrowUp";
    std::string down = "ArrowDown";
    std::string left = "ArrowLeft";
    std::string right = "ArrowRight";
public:
    KeyBoardController();
    ~KeyBoardController();

    int move_right() override;
    int move_left() override;
    int move_down() override;
    int move_up() override;
    int action_pause() override;
    int action_accept() override;
};

#endif // KEYBOARDCONTROLLER_H