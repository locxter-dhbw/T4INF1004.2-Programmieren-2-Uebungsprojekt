#ifndef TURN_H
#define TURN_H
#include "Pos.h"

class Turn {
public:
    Turn(char m_symbol);

    Turn(char symbol, Pos pos);

    virtual ~Turn() = default;

    char getSymbol() const;

    Pos getPos() const;

    void setPos(Pos m_pos);

private:
    char m_symbol;
    Pos m_pos;
};

#endif //TURN_H
