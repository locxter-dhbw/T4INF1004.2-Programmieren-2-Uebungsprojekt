#include "../include/Game.h"

Game::Game() : player1(), player2(), status(GameStatus::IDLE) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            m_playField[i][j] = '?';
        }
    }
}

void Game::initialize() {
    // TODO Implement functionality
}

void Game::run() {
    // TODO Implement functionality
}

void Game::finish() {
    // TODO Implement functionality
}
