#include "Prey.h" // вкл заголовочного файла для объявл
#include <stdexcept> //директива препроцессора, которая включает заголовочный файл <stdexcept>, содержащий определение стандартных исключений для C++

void Prey::move(int type) { //определение метода move() класса рrey, который принимает тип движения в качестве аргумента
    switch (type) { // начало оператора switch для различных вариантов типа движения
        case 0://ести тип движ равен 0
            if(pos.getX() + 1 > 29) throw std::runtime_error("out of bound"); // проверка не выходит ли добыча за границы поля по оси х
            pos.setX(pos.getX() + 1); //увеличим  координаты х позиции добычи на 1
            break; // завершение случ 0 
// для каждого варианта проверяется выход за границы поля по оси X и Y, а затем происходит соответствующее перемещение
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

void Prey::initialize() { // опред метода initialize() класса Prey без параметров
    pos.initialize(); //вызов метода initialize() для инициализации позиции добычи
}

void Prey::initialize(Point2D point) { // определение метода initialize() класса Prey с параметром типа Point2D
    pos.initialize(point); // вызов метода initialize() для инициализации позиции добычи с заданными координатами
}

const Point2D &Prey::getPos() const { // определение метода getPos() класса Prey, возвращающего константную ссылку на позицию добычи
    return pos; // возврат константной ссылки на объект Point2D, представляющий позицию добычи
}
