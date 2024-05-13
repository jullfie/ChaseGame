#include "Predator.h"
#include <stdexcept>

void Predator::move(int type, int distance) {
    switch (type) {
        case 0:
            if (pos.getX() + distance > 29) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() + distance);
            break;
        case 1:
            if (pos.getX() - distance < 0) throw std::runtime_error("out of bound");
            pos.setX(pos.getX() - distance);
            break;
        case 2:
            if (pos.getY() + distance > 29) throw std::runtime_error("out of bound");
            pos.setY(pos.getY() + distance);
            break;
        case 3:
            if (pos.getY() - distance < 0) throw std::runtime_error("out of bound");
            pos.setY(pos.getY() - distance);
            break;
    }
}

void Predator::initialize() {
    pos.initialize();
}

void Predator::initialize(Point2D point) {
    pos.initialize(point);
}

const Point2D &Predator::getPos() const {
    return pos;
}


