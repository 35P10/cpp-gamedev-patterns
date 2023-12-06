#include "KeyBoardController.h"

KeyBoardController::KeyBoardController() {
    keyMap["Enter"] = 13;
    keyMap["Space"] = 32;
    keyMap["Tab"] = 9;
    keyMap["Esc"] = 27;
    keyMap["Backspace"] = 8;
    keyMap["Delete"] = 127;
    keyMap["ArrowUp"] = 38;
    keyMap["ArrowDown"] = 40;
    keyMap["ArrowLeft"] = 37;
    keyMap["ArrowRight"] = 39;
    keyMap["F1"] = 112;
    keyMap["F2"] = 113;
    keyMap["F3"] = 114;
}

int KeyBoardController::move_right() {
    return keyMap[right];
}

int KeyBoardController::move_left() {
    return keyMap[left];
}

int KeyBoardController::move_down() {
    return keyMap[down];
}

int KeyBoardController::move_up() {
    return keyMap[up];
}

int KeyBoardController::action_pause() {
    return keyMap[pause];
}

int KeyBoardController::action_accept() {
    return keyMap[accept];
}
