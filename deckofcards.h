#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "card.h"

class DeckOfCards {
protected:
    static const int maxCards = 52;
    Card* cards;
    int numCards;

public:
    DeckOfCards();
    ~DeckOfCards();
    DeckOfCards(int initialNumCards);

    int getNumCards() const { return numCards; }
    Card* getCards() const { return cards; }

    friend ostream& operator<<(ostream& os, const DeckOfCards& deck);
    friend istream& operator>>(istream& is, DeckOfCards& deck);
    operator string() const;

    void addCard(const Card& card);
    static void processDeck(const DeckOfCards& deck);
};
