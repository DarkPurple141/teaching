#include "Card.h"
#include <err.h>
#include <stdlib.h>

typedef struct _card {
   value value;
   color color;
   suit suit;
} card;

// Create a new card.
// These values can only be set at creation time.
// The number should be between 0x0 and 0xF.
Card newCard(value value, color color, suit suit) {
   Card new = malloc(sizeof(card));
   if (!new) err(1, "Malloc failed");
   new->value = value;
   new->color = color;
   new->suit = suit;

   return new;
}

// Destroy an existing card.
void destroyCard(Card card) {
   if (!card) err(1, "No card allocated");
   free(card);
}

// Get the card's suit (HEARTS, DIAMONDS, etc).
suit cardSuit(Card card) {
   if (!card) err(1, "No card allocated");
   return card->suit;
}

// Get the card's number (0x0 through 0xF).
value cardValue(Card card) {
   if (!card) err(1, "No card allocated");
   return card->value;
}

// Get the card's color (RED, BLUE, etc).
color cardColor(Card card) {
   if (!card) err(1, "No card allocated");
   return card->color;
}
