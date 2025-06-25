#include "../include/Game.h"

#include "../include/Menu.h"

Game::Game() : m_status(GameStatus::IDLE) {
}

void Game::initialize() {
    m_player1 = Menu::getPlayer();
    m_player2 = Menu::getPlayer();
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            m_playField[i][j] = '?';
        }
    }
    m_status = GameStatus::INITIALIZED;
}

void Game::run() {
    if (m_status != GameStatus::INITIALIZED) return;
    m_status = GameStatus::RUNNING;
    while (true) {
        auto turn = m_player1->makeTurn(m_playField);
        m_playField[turn.getPos().getY()][turn.getPos().getX()] = turn.getSymbol();
        if (playerHasWon(m_player1)) {
            m_player1->setWon(true);
            break;
        } else if (playerHasWon(m_player2)) {
            m_player2->setWon(true);
            break;
        }
        turn = m_player2->makeTurn(m_playField);
        m_playField[turn.getPos().getY()][turn.getPos().getX()] = turn.getSymbol();
        if (playerHasWon(m_player1)) {
            m_player1->setWon(true);
            break;
        } else if (playerHasWon(m_player2)) {
            m_player2->setWon(true);
            break;
        }
    }
    m_status = GameStatus::FINISHED;
}

void Game::finish() {
    if (m_status != GameStatus::FINISHED) return;
    Menu::showResult(m_playField, m_player1, m_player2);
}

bool Game::playerHasWon(std::shared_ptr<Player> player) {
    // TODO Implement functionality
    return true;
}
