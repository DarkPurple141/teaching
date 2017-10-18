// The game of Final Card-Down. v1.2.0
//
// !!! DO NOT CHANGE THIS FILE !!!


#include "Card.h"
#include "Game.h"
#include <stdlib.h>

typedef struct _game {
   int deckSize;
   int turn;
   direction direction;
} game;

// Create a new game engine.
//
// This creates a game with a deck of the given size
// and the value, color, and suit of each card to be taken from
// each of the arrays in order.
//
// Your game will always have 4 players. Each player starts with a hand
// of 7 cards. The first card from the deck is given to player 0, the
// second to player 1, the third to player 2, the fourth to player 3,
// the fifth to player 0, and so on until each player has 7 cards.
Game newGame(int deckSize, value values[], color colors[], suit suits[]) {
   Game g = calloc(1, sizeof(game));
   g->deckSize = deckSize;
   g->turn = 0;
   g->direction = CLOCKWISE;
   return g;
}

// Destroy an existing game.
//
// This should free all existing memory used in the game including
// allocations for players and cards.
void destroyGame(Game g) {
   free(g);
}

// The following functions can be used by players to discover
// information about the state of the game.

// Get the number of cards that were in the initial deck.
int numCards(Game g) {
   return g->deckSize;
}

// Get the number of cards in the initial deck of a particular
// suit.
int numOfSuit(Game g, suit suit) {
   return g->deckSize;
}

// Get the number of cards in the initial deck of a particular color.
int numOfColor(Game g, color color) {
   return g->deckSize;
}

// Get the number of cards in the initial deck of a particular value.
int numOfValue(Game g, value value) {
   return g->deckSize;
}

// Get the number of the player whose turn it is.
int currentPlayer(Game g) {
   return g->turn;
}

// Get the current turn number.
//
// The turn number increases after a player ends their turn.
// The turn number should start at 0 once the g has started.
int currentTurn(Game g) {
   return g->turn;
}

// Get the number of points for a given player.
// Player should be between 0 and 3.
//
// This should _not_ be called by a player.
int playerPoints(Game g, int player) {
   return 0;
}

// Get the current direction of play.
direction playDirection(Game g) {
   return g->direction;
}

// Get the card that is on the top of the discard pile.
Card topDiscard(Game g) {
   return newCard(0, 0, 0);
}

// This function returns the number of turns that have occurred in the
// g so far including the current turn.
// When using either the turnMoves or pastMove function,
// the turn number should be less than the number of moves that this
// function returns.
// (i.e. on turn 0 of the g, this should return 1, as there has been
// 1 turn so far including the current turn; if you called pastMove you
// would need to call it on turn 0, as this is the only possible value
// less than 1.)
int numTurns(Game g) {
   return g->turn + 1;
}

// Get the number of moves that happened on a turn.
//
// A turn may consist of multiple moves such as drawing cards,
// playing cards, and ending the turn.
int turnMoves(Game g, int turn) {
   return g->turn + 1;
}

// Look at a previous move from a specified turn.
playerMove pastMove(Game g, int turn, int move);

// Get the number of cards in a given player's hand.
int playerCardCount(Game g, int player) {
   return 7;
}

// Get the number of cards in the current player's hand.
int handCardCount(Game g) {
   return 7;
}

// View a card from the current player's own hand.
//
// The player should not need to free() this card,
// so you should not allocate or clone an existing card
// but give a reference to an existing card.
Card handCard(Game g, int card);

// Check if a given move is valid.
//
// If the last player played a 2 (DRAW_TWO),
// the next player must either play a 2
// or draw 2 cards.
// Otherwise, the player must play a card that is either a ZERO
// or that has the same color, value, or suit as the card on the top
// of the discard pile.
//
// If the player plays an ADVANCE, the next player's turn is skipped.
// If the player plays a BACKWARDS, the direction of play is reversed.
// If the player plays a CONTINUE, they may play another card.
// If the player plays a DECLARE, they must also state which color
// the next player's discarded card should be.
//
// A player can only play cards from their hand.
// A player may choose to draw a card instead of discarding a card.
// A player must draw a card if they are unable to discard a card.
//
// This check should verify that:
// * The card being played is in the player's hand
// * The player has played at least one card before finishing their turn,
//   unless a draw-two was played, in which case the player may not
//   play a card, and instead must draw the appropriate number of cards.
int isValidMove(Game game, playerMove move);

// Play the given action for the current player
//
// If the player makes the END_TURN move, their turn ends,
// and it becomes the turn of the next player.
//
// This should _not_ be called by the player AI.
void playMove(Game game, playerMove move);

// Check the game winner.
//
// Returns NOT_FINISHED if the game has not yet finished,
// 0-3, representing which player has won the game, or
// NO_WINNER if the game has ended but there was no winner.
int gameWinner(Game game) {
   return NOT_FINISHED;
}
