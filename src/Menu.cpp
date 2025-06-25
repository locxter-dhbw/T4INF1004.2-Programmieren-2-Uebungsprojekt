#include "../include/Menu.h"

#include "../include/HumanPlayer.h"

std::shared_ptr<Player> Menu::getPlayer() {
    // TODO Implement functionality
    return std::make_shared<HumanPlayer>('c', "Bla");
}

void Menu::showPlayField(char playField[ROWS][COLS]) {
    // TODO Implement functionality
}

Pos Menu::getPos() {
    // TODO Implement functionality
    return Pos();
}

void Menu::showResult(char playField[ROWS][COLS], std::shared_ptr<Player>player1, std::shared_ptr<Player>player2) {
    // TODO Implement functionality
}
