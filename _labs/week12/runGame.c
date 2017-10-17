#include "Game.h"
#include "Player.h"

// kinda like the how the game will be run.

int main(void) {

   Game g = newGame();

   while (gameWinner(g) == IN_PROGRESS) {
      int currPlayer = getCurrentPlayer(g);

      while (!isValidMove(g, current)) {
         playerMove current = decideMove(g);
      }
      playMove(g, current);

   }

   destroyGame(g);

}
