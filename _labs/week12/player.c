// If the player's turn is skipped, this funciton
// is *not* called for that player.
//
// Don't forget about the `isValidMove` function -- it's a handy way
// to work out before you play a move whether or not it will be valid
// (and you should only ever be making valid moves).
//
// You can also use it to help you work out where you are at in the
// game, without needing to look through all of the previous state
// yourself --
//
// Looking at the diagram of valid moves at any given point in the game,
// we can see that at the start of the game, it's valid to:
//   - call somebody out for forgetting to SAY_UNO / SAY_DUO / SAY_TRIO,
//   - draw a card,
//   - play a card, *if* you have a valid card that you can play.
//
// It's not valid to end your turn unless you've done some other
// action/s (again, see the diagram).
//
// We can take advantage of that for our very simple A.I. to determine
// where we are at in our turn, and thus what move we should make.

static int canPlayCard(Game g, playerMove *move) {

   int handCards = handCards(g);
   int i = 0;
   while (i < handCards) {
      Card c = handCard(g, i);
      move->card = c;
      if (isValidMove(g, *move) {
         return TRUE;
      }
      i++;
   }

   return FALSE;

}

playerMove decideMove(Game game) {

   // Start out by making a move struct, to say what our move is.
   playerMove move;

    // Set our move to be END_TURN, and check whether that's
    // a valid move -- if it is, then just end our turn (for now).
   move.action = PLAY_CARD;

   if (canPlayCard(game, &move) == TRUE) {
      return move;
   } else {
      move.action = END_TURN;
      if (isValidMove(game, move) == TRUE) {

      } else {
         move.action = DRAW_CARD;
      }
   }

   return move;

}
