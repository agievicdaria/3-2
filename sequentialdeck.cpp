#include "sequentialdeck.h"
using namespace std;
#include <iostream>
#include <string>

SequentialDeck::SequentialDeck() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    for (int s = 0; s < 4; ++s) {
        for (int r = 0; r < 13; ++r) {
            Card* newCard = new Card(ranks[r], suits[s]);
            newCard->flip();
            addCard(*newCard);
        }
    }
}
