#include "Prey.h"
#include <stdexcept>

void Prey::move(int type) {
    switch (type) {
        case 0:
            if(pos.getX() + 1 > 29) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() + 1);
            break;
        case 1:
            if (pos.getX() - 1 < 0) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() - 1);
            break;
        case 2:
            if (pos.getY() + 1 > 29) throw std::runtime_error("out of bound");
            pos.setY(pos.getY() + 1);
            break;
        case 3:
            if (pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
            pos.setY(pos.getY() - 1);
            break;
        case 4:
            if (pos.getY() + 1 > 29) throw std::runtime_error("out of bound");
            if (pos.getX() + 1 > 29) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() + 1);
            pos.setY(pos.getY() + 1);
            break;
        case 5:
            if (pos.getX() + 1 > 29) throw std::runtime_error("out of bound");
            if (pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() + 1);
            pos.setY(pos.getY() - 1);
            break;
        case 6:
            if (pos.getY() + 1 > 29) throw std::runtime_error("out of bound");
            if (pos.getX() - 1 < 0) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() - 1);
            pos.setY(pos.getY() + 1);
            break;
        case 7:
            if (pos.getX() - 1 < 0) throw std::runtime_error("out of bound");
            if (pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() - 1);
            pos.setY(pos.getY() - 1);
            break;
    }
}

void Prey::initialize() {
    pos.initialize();
}

void Prey::initialize(Point2D point) {
    pos.initialize(point);
}

const Point2D &Prey::getPos() const {
    return pos;
}
