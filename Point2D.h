#ifndef CHASEGAME_POINT2D_H
#define CHASEGAME_POINT2D_H


class Point2D { //объявл класса

private: //объявл закрытых переменных
    int x;
    int y;
public: // объявл методы класса Point2D
    void initialize();
    void initialize(Point2D pos);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
};


#endif //CHASEGAME_POINT2D_H
