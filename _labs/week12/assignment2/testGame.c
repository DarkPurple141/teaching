#include "Game.h"
#include "Card.h"
#include <assert.h>
#include <stdlib.h>

#define NUM_CARDS 70
#define START_HAND 7


void testInitial(Game g) {
   assert(gameWinner(g) == NOT_FINISHED);
   int i = 0;
   while (i < NUM_PLAYERS) {
      assert(playerCardCount(g, i) == START_HAND);
      assert(playerPoints(g, i) == 0);
      i++;
   }

   assert(numOfSuit(g, 0) == NUM_CARDS);
   assert(numOfColor(g, 0) == NUM_CARDS);
   assert(numOfValue(g, 0) == NUM_CARDS);
   assert(numCards(g) == NUM_CARDS);
   assert(playDirection(g) == CLOCKWISE);
   Card c = topDiscard(g);
   assert(cardValue(c) == 0);
   assert(cardSuit(c) == 0);
   assert(cardColor(c) == 0);

}


int main (void) {

   suit suits[NUM_CARDS] = {0};
   color colors[NUM_CARDS] = {0};
   value values[NUM_CARDS] = {0};

   Game g = newGame(NUM_CARDS, values, colors, suits);

   // making sure game was created
   assert(g != NULL);

   testInitial(g);


   destroyGame(g);


   return 0;
}
