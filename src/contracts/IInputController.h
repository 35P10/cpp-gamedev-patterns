#ifndef IINPUTCONTROLLER_H
#define IINPUTCONTROLLER_H

class IInputController {
public:
    virtual int move_right() = 0;
    virtual int move_left() = 0;
    virtual int move_down() = 0;
    virtual int move_up() = 0;
    virtual int action_pause() = 0;
    virtual int action_accept() = 0;
};

#endif // IINPUTCONTROLLER_H
