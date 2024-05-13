#ifndef CHASEGAME_PREDATOR_H
#define CHASEGAME_PREDATOR_H


#include "Point2D.h" // вкл заголовочного файла Point2D.h для объявл класса Point2D
#include "Movable.h" // вкл заголовочного файла Movable.h для объявл класса Movable

class Predator { // объявл класса Predator

private:
    Point2D pos; // приватное поле класса Predator для хранения позиции хищника типа Point2D
public:
    void initialize(); // объявл публичного метода initialize() класса Predator без параметров для инициализации хищника

    const Point2D &getPos() const; // объявл публичного метода getPos() класса Predator, возвращающего константную ссылку на позицию хищника

    void initialize(Point2D point); // объявл публичного метода initialize() класса Predator с параметром типа Point2D для инициализации хищника с заданными координатами.

    void move(int type, int distance); // объявл публичного метода move() класса Predator с параметрами типа int для типа движения и расстояния перемещения
};


#endif //CHASEGAME_PREDATOR_H
