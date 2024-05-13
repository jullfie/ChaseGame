#include "Character.h"

const std::string &Character::getType() const {
    return type;
}

void Character::setType(const std::string &type) {
    Character::type = type;
}

void Character::initialize() {
    if(type == "Prey")
        prey.initialize();
    else
        predator.initialize();
}

void Character::initialize(Point2D point) {
    if(type == "Prey")
        prey.initialize(point);
    else
        predator.initialize(point);
}

Point2D Character::getPos() {
    if(type == "Prey")
        return prey.getPos();
    else
        return predator.getPos();
}

void Character::move(int type) {
        prey.move(type);
}

void Character::move(int type, int distance) {
    predator.move(type, distance);
}
