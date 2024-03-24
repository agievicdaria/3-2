#include "deckofcards.h"
#include <iostream>
#include <string>
#include <sstream>
#include "card.h"
using namespace std;

DeckOfCards::DeckOfCards(int initialNumCards) : numCards(0) {
    if (initialNumCards < 0 || initialNumCards > maxCards) {
        cerr << "Invalid number of initial cards specified." << endl;
        cerr << "Number of initial cards should be between 0 and " << maxCards << endl;
        return;
    }
    numCards = initialNumCards;
}

DeckOfCards::DeckOfCards() : cards(new Card[maxCards]), numCards(0) {}

DeckOfCards::~DeckOfCards() {
    delete[] cards;
}

void DeckOfCards::addCard(const Card& card) {
    if (numCards >= maxCards) {
        cerr << "Deck is full. Cannot add more cards." << endl;
        return;
    }
    cards[numCards] = card;
    ++numCards;
}

ostream& operator<<(ostream& os, const DeckOfCards& deck) {
    os << string(deck);
    return os;
}

istream& operator>>(istream& is, DeckOfCards& deck) {
    for (int i = 0; i < deck.numCards; ++i) {
        string rank, suit;
        is >> rank >> suit;
        deck.cards[i] = Card(rank, suit);
    }
    return is;
}

DeckOfCards::operator string() const {
    stringstream ss;
    for (int i = 0; i < numCards; ++i) {
        ss << cards[i] << endl;
    }
    return ss.str();
}

void DeckOfCards::processDeck(const DeckOfCards& deck) {
    cout << deck;
}