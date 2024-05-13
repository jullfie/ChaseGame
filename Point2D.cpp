#include <cstdlib>
#include <time.h>

#include "Point2D.h" //// вкл заголов файл Point2D.h для  объявл класса Point2D

void Point2D::initialize() { // определение метода initialize класса Point2D
    srand(time(NULL)); // вызов srand для генерации случайных чисел
    x = std::rand()%30; // инициализируем координаты x и y случайными значениями от 0 до 29
    y = std::rand()%30;
}

void Point2D::initialize(Point2D pos) { // перегруженный метод initialize класса Point2D
    srand(time(NULL)); 
    while(true) {
        x = std::rand() % 30; // генерируем случайные значения координат x и y от 0 до 29
        y = std::rand() % 30;
        if((abs(pos.x - x)^2 + abs(pos.y - y)^2)^1/2 > 5) break; // проверяем, что расстояние между текущей точкой и переданной точкой pos больше 5
    }
}

int Point2D::getX() const { // метод класса Point2D возвращ значение координаты x
    return x;
}

void Point2D::setX(int x) { // метод класса Point2D, устанавливающий новое значение для координаты x
    Point2D::x = x;
}

int Point2D::getY() const { // метод класса Point2D возвращ значение координаты y
    return y;
}

void Point2D::setY(int y) { // метод класса Point2D, устанавливающий новое значение для координаты y
    Point2D::y = y;
}
