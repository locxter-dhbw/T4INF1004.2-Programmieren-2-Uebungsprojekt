#include "../include/HumanPlayer.h"

#include "../include/Menu.h"

HumanPlayer::HumanPlayer(char symbol, std::string name) : m_symbol(symbol), m_name(name), m_won(false) {
}

Turn HumanPlayer::makeTurn(char playField[ROWS][COLS]) {
    // TODO Implement functionality
}

char HumanPlayer::getSymbol() {
    return m_symbol;
}

std::string HumanPlayer::getName() {
    return m_name;
}

bool HumanPlayer::getWon() {
    return m_won;
}

void HumanPlayer::setWon(bool won) {
    m_won = won;
}
