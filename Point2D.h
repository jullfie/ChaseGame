#ifndef CHASEGAME_POINT2D_H
#define CHASEGAME_POINT2D_H


class Point2D {

private:
    int x;
    int y;
public:
    void initialize();
    void initialize(Point2D pos);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
};


#endif //CHASEGAME_POINT2D_H
