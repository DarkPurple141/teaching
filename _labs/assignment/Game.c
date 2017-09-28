#include "Game.h"
#include "Card.h"
#include <stdlib.h>

#define NUM_PLAYERS 4
#define START_HAND 7

typedef struct _player {
   int points;
   Card hand;
   int size;
} player;

typedef struct _player *Player;

typedef struct _game {
   direction direction;
   Player players;
   Card* deck;
   int turn;
   int deckSize;
   int turnMoves;
   int cardIndex;
} game;

typedef struct _config {
   int x;
} config;

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
   Game g = malloc(sizeof(game));
   g->deckSize = deckSize;
   g->players = malloc(sizeof(player)*NUM_PLAYERS);
   g->cardIndex = 0;
   int i = 0;
   while (i < NUM_PLAYERS) {
      g->players[i].points = 0;
      g->players[i].size = 0;
      g->players[i]->hand = malloc(sizeof(Card)*START_HAND);
      i++;
   }
   g->turnMoves = 0;
   g->deck = malloc(sizeof(Card)*deckSize);
   i = 0;
   while (i < deckSize) {
      Card c = newCard(values[i], colors[i], suits[i]);
      if (i < NUM_PLAYERS*START_HAND)
         g->players[i%NUM_PLAYERS]->hand[i%START_HAND] = c;
         g->players[i%NUM_PLAYERS].size++;
      else
         g->deck[i-NUM_PLAYERS*START_HAND] = c;

      i++;
   }

   return g;
}

// Destroy an existing game.
//
// This should free all existing memory used in the game including
// allocations for players and cards.
void destroyGame(Game g) {
   int i = 0;
   while (i<NUM_PLAYERS) {
      int j = 0;
      while (j < g->players[i].size) {
         destroyCard(g->players[i]->hand[j]);
         j++;
      }
      free(g->players[i]->hand);
      i++;
   }
   free(g->deck);
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
   return 0;
}

// Get the number of cards in the initial deck of a particular color.
int numOfColor(Game g, color color);

// Get the number of cards in the initial deck of a particular value.
int numOfValue(Game g, value value);

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
   return g->players[player].points;
}

// Get the current direction of play.
direction getPlayDirection(Game g) {
   return g->direction;
}

// Get the number of viewable previous turns.
int pastTurns(Game g);

// Get the number of moves that happened on a turn.
//
// A turn may consist of multiple moves such as drawing cards,
// playing cards, and ending the turn.
int turnMoves(Game g, int n) {
   return g->turnMoves;
}

// Look at a previous move from a specified turn.
playerMove pastMove(Game g, int turn, int move);

// Get the number of cards in a given player's hand.
int playerCardCount(Game g, int n) {
   return g->players[n].size;
}

// Get the number of cards in the current player's hand.
int handCardCount(Game g) {
   return g->players[g->turn].size;
}

// View a card from the current player's own hand.
//
// The player should not need to free() this card,
// so you should not allocate or clone an existing card
// but give a reference to an existing card.
Card handCard(Game g, int n) {
   return g->players[g->turn]->hand[n];
}

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
int isValidMove(Game g, playerMove action);

// Play the given action for the current player
//
// If the player draws a card, their turn should end and it should then
// become the turn of the next player.
//
// This should _not_ be called by the player AI.
void playMove(Game g, playerMove action);
