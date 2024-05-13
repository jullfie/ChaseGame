#ifndef CHASEGAME_MOVABLE_H
#define CHASEGAME_MOVABLE_H


class Movable { //объявл класса Movable

public:
    int type;
    virtual void move(int type) = 0; // виртуальная функция move, класс с хотя бы одной чисто виртуальной функцией - абстрактный класс
};


#endif //CHASEGAME_MOVABLE_H
