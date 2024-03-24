#include "randomdeck.h"
#include <cstdlib>
#include <ctime>
using namespace std;
#include <iostream>
#include <string>

RandomDeck::RandomDeck() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL));
    
    for (int i = 0; i < 52; ++i) {
        int rankIndex = rand() % 13;
        int suitIndex = rand() % 4;
        Card* newCard = new Card(ranks[rankIndex], suits[suitIndex]);
        newCard->flip();
        addCard(*newCard);
    }
}
