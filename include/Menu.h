#ifndef MENU_H
#define MENU_H
#include "Player.h"

class Menu {
public:
    static Player& getPlayer();

    static void showPlayField(char playField[ROWS][COLS]);

    static Pos getPos();

    static void showResult(char playField[ROWS][COLS], Player &player1, Player &player2);
};

#endif //MENU_H
