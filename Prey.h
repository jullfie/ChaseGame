#ifndef CHASEGAME_PREY_H //директива препроцессора ifndef проверяет не определен ли  уже символ
#define CHASEGAME_PREY_H


#include "Point2D.h"
#include "Movable.h"

class Prey{
private:
    Point2D pos; // объявл закрытого члена класса prey - объекта типа point2D для хранения позиции добычи
public:
    void initialize();
    void initialize(Point2D point); //объявл методов initialize() класса prey для инициализации добычи без параметров и с заданнной позицией

    const Point2D &getPos() const; // объявл метода getPos() класса prey- возвращ константную ссылку на позицию добычи

    void move(int type); //объявл метода move() класса prey - для перемещ добычи в соответствии с заданным типом движ
};


#endif //CHASEGAME_PREY_H
