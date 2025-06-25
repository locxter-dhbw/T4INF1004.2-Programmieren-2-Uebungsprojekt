#include "include/Game.h"

int main() {
    Game myGame = Game();
    myGame.initialize();
    myGame.run();
    myGame.finish();
    return 0;
}
