#include "Predator.h" // вкл  заголов  файла Predator.h для объявл класса Predator.
#include <stdexcept> // вкл стандартного заголовочного файла <stdexcept> для доступа к стандартным исключениям

void Predator::move(int type, int distance) {  // определение метода move() класса Predator с параметрами type и distance
    switch (type) { // оператор switch для переменной type
        case 0: // если type равно 0:
            if (pos.getX() + distance > 29) throw std::runtime_error("out of bound"); // проверка, не выходит ли хищник за границы по оси X при перемещении на заданное расстояние, если да, выбрасывается исключение std::runtime_error
            pos.setX(pos.getX() + distance);  // изменение координаты X хищника на заданное расстояние
            break;
        case 1:
            if (pos.getX() - distance < 0) throw std::runtime_error("out of bound"); // проверка, не выходит ли хищник за границы по оси X при перемещении на заданное расстояние в обратном направлении. Если да, выбрасывается исключение std::runtime_error.
            pos.setX(pos.getX() - distance);// изменение координаты X хищника на заданное расстояние в обратном направлении
            break;
        case 2:
            if (pos.getY() + distance > 29) throw std::runtime_error("out of bound"); // проверка, не выходит ли хищник за границы по оси Y при перемещении на заданное расстояние. Если да, выбрасывается исключение std::runtime_error.
            pos.setY(pos.getY() + distance); // изменение координаты Y хищника на заданное расстояние
            break;
        case 3:
            if (pos.getY() - distance < 0) throw std::runtime_error("out of bound"); // проверка, не выходит ли хищник за границы по оси Y при перемещении на заданное расстояние в обратном направлении. Если да, выбрасывается исключение std::runtime_error.
            pos.setY(pos.getY() - distance); // изменение координаты Y хищника на заданное расстояние в обратном направлении
            break;
    }
}

void Predator::initialize() { // определение метода initialize() класса Predator без параметров
    pos.initialize(); // инициализация позиции хищника с использованием метода initialize() объекта pos типа Point2D
}

void Predator::initialize(Point2D point) { // инициализация позиции хищника с использованием метода initialize() объекта pos типа Point2D
    pos.initialize(point); // инициализация позиции хищника с использованием метода initialize() объекта pos типа Point2D и переданных координат из point
}

const Point2D &Predator::getPos() const { // определение метода getPos() класса Predator, возвращающего константную ссылку на объект типа Point2D
    return pos; // возврат константной ссылки на объект pos, содержащий текущую позицию хищника
}


