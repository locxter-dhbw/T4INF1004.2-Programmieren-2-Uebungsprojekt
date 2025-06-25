#ifndef GAME_H
#define GAME_H
#include <memory>

#include "Constants.h"
#include "GameStatus.h"
#include "Player.h"

class Game {
public:
    Game();

    void initialize();

    void run();

    void finish();

private:
    char m_playField[ROWS][COLS]{};
    Player &player1;
    Player &player2;
    GameStatus status;
};

#endif //GAME_H
