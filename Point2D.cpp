#include <cstdlib>
#include <time.h>

#include "Point2D.h"

void Point2D::initialize() {
    srand(time(NULL));
    x = std::rand()%30;
    y = std::rand()%30;
}

void Point2D::initialize(Point2D pos) {
    srand(time(NULL));
    while(true) {
        x = std::rand() % 30;
        y = std::rand() % 30;
        if((abs(pos.x - x)^2 + abs(pos.y - y)^2)^1/2 > 5) break;
    }
}

int Point2D::getX() const {
    return x;
}

void Point2D::setX(int x) {
    Point2D::x = x;
}

int Point2D::getY() const {
    return y;
}

void Point2D::setY(int y) {
    Point2D::y = y;
}
