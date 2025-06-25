#include "../include/Menu.h"
#include <iostream>
#include "../include/HumanPlayer.h"

std::shared_ptr<Player> Menu::getPlayer() {
    char symbol;
    std::string name;
    // TODO Check for valid values
    std::cout << "Enter symbol:" << std::endl;
    std::cin >> symbol;
    std::cout << "Enter name:" << std::endl;
    std::cin >> name;
    return std::make_shared<HumanPlayer>(symbol, name);
}

void Menu::showPlayField(char playField[ROWS][COLS]) {
    std::cout << "Current play field:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << playField[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

Pos Menu::getPos() {
    // TODO Implement bounds check
    auto pos = Pos();
    int input;
    std::cout << "Enter row:" << std::endl;
    std::cin >> input;
    pos.setY(input);
    std::cout << "Enter column:" << std::endl;
    std::cin >> input;
    pos.setX(input);
    return pos;
}

void Menu::showResult(char playField[ROWS][COLS], std::shared_ptr<Player> player1, std::shared_ptr<Player> player2) {
    std::cout << "GAME OVER" << std::endl;
    if (player1->getWon()) {
        std::cout << "Player 1 won" << std::endl;
    } else if (player2->getWon()) {
        std::cout << "Player 2 won" << std::endl;
    }
    showPlayField(playField);
}
