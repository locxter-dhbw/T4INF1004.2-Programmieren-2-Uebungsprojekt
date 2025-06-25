#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Turn.h"
#include "Constants.h"

class Player {
public:
    virtual Turn makeTurn(char playField[ROWS][COLS]) = 0;

    virtual char getSymbol() = 0;

    virtual std::string getName() = 0;

    virtual bool getWon() = 0;

    virtual void setWon(bool won) = 0;
};

#endif //PLAYER_H
