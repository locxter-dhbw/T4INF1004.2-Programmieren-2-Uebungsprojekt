#include "../include/Pos.h"

Pos::Pos(int x, int y)
        : m_x(x),
          m_y(y) {
}

int Pos::getX() const {
    return m_x;
}

void Pos::setX(int x) {
    this->m_x = x;
}

int Pos::getY() const {
    return m_y;
}

void Pos::setY(int y) {
    this->m_y = y;
}