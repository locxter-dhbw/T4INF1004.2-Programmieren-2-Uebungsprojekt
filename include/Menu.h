#ifndef MENU_H
#define MENU_H
#include <memory>

#include "Player.h"

class Menu {
public:
    static std::shared_ptr<Player> getPlayer();

    static void showPlayField(char playField[ROWS][COLS]);

    static Pos getPos();

    static void showResult(char playField[ROWS][COLS], std::shared_ptr<Player> player1, std::shared_ptr<Player> player2);
};

#endif //MENU_H
