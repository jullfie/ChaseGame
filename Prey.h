#ifndef CHASEGAME_PREY_H
#define CHASEGAME_PREY_H


#include "Point2D.h"
#include "Movable.h"

class Prey{
private:
    Point2D pos;
public:
    void initialize();
    void initialize(Point2D point);

    const Point2D &getPos() const;

    void move(int type);
};


#endif //CHASEGAME_PREY_H
