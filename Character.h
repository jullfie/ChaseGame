#ifndef CHASEGAME_CHARACTER_H
#define CHASEGAME_CHARACTER_H
// проверяем что CHASEGAME_CHARACTER_H не определен, если соответствует - код выполнен , нет - скип

#include <string>
#include "Predator.h" // вкл заголовочного файла для объявл класса predator
#include "Prey.h" вкл заголовочного файла для объявл класса prey

class Character { //объявл класса

private: // члены класса будут приватными-доступны только внутри класса
    std::string type; // приватное поле для хранения типа перса
    Predator predator; 
    Prey prey;
public: // члены класса будут публичными-доступны извне класса
    const std::string &getType() const; // объявл метода класса для получения типа перса
    void initialize(); //объявл метода класса для инициализации перса
    void initialize(Point2D point); //объявл метода класса для инициализации перса с передачей объекта 
    void setType(const std::string &type);// объявл метода класса для установки типа перса
    void move(int type); //объявл метода класса для перемещения перса по заданному типу
    void move(int type, int distance); //объявл метода класса для перемещения перса по заданному типу на указанное расстояние
    Point2D getPos(); //объявл метода класса для получения позиции перса

};

//заверш определения загол файла 
#endif //CHASEGAME_CHARACTER_H
