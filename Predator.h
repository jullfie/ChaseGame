#ifndef CHASEGAME_PREDATOR_H
#define CHASEGAME_PREDATOR_H


#include "Point2D.h"
#include "Movable.h"

class Predator {

private:
    Point2D pos;
public:
    void initialize();

    const Point2D &getPos() const;

    void initialize(Point2D point);
    void move(int type, int distance);
};


#endif //CHASEGAME_PREDATOR_H
