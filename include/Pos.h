#ifndef POS_H
#define POS_H

class Pos {
public:
    Pos();

    Pos(int x, int y);

    virtual ~Pos() = default;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int m_x;
    int m_y;
};

#endif //POS_H
