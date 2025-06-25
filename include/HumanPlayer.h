#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(char symbol, std::string name);

    Turn makeTurn(char playField[ROWS][COLS]) override;

    char getSymbol() override;

    std::string getName() override;

    bool getWon() override;

    void setWon(bool won) override;

private:
    char m_symbol;
    std::string m_name;
    bool m_won;
};

#endif //HUMANPLAYER_H
