#include "../include/Turn.h"

Turn::Turn(char symbol)
    : m_symbol(symbol),
      m_pos(Pos()) {
}

Turn::Turn(char symbol, const Pos pos)
    : m_symbol(symbol),
      m_pos(pos) {
}

char Turn::getSymbol() const {
    return m_symbol;
}

Pos Turn::getPos() const {
    return m_pos;
}

void Turn::setPos(Pos m_pos) {
    this->m_pos = m_pos;
}
