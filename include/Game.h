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
    std::shared_ptr<Player> m_player1;
    std::shared_ptr<Player> m_player2;
    GameStatus m_status;

    bool playerHasWon(std::shared_ptr<Player> player);
};

#endif //GAME_H
