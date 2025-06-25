#include <iostream>

#include "include/Game.h"
#include "include/HumanPlayer.h"
#include "include/Player.h"

int main() {
    Game myGame = Game();
    myGame.initialize();
    myGame.run();
    myGame.finish();
    return 0;
}
