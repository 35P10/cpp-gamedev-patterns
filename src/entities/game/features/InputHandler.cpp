#include "entities/game/Game.hpp"

bool Game::checkInput() {
    if (_kbhit()) {
        int key = _getch();
        if (key == input->action_pause()) {
            return false;
        }
        else if (key == input->action_accept()) {
            std::cout << "La tecla ENTER ha sido presionada." << std::endl;
        }
        else if (key == input->move_right()) {
            snake->changeDirection_right();
        }
        else if (key == input->move_up()) {
            snake->changeDirection_up();
        }
        else if (key == input->move_down()) {
            snake->changeDirection_bottom();
        }
        else if (key == input->move_left()) {
            snake->changeDirection_left();
        }
    }
    return true;
    ;
}