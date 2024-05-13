#ifndef CHASEGAME_MOVABLE_H
#define CHASEGAME_MOVABLE_H


class Movable {

public:
    int type;
    virtual void move(int type) = 0;
};


#endif //CHASEGAME_MOVABLE_H
