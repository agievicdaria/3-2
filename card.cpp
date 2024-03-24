#include "card.h"
using namespace std;
#include <iostream>
#include <sstream>
#include <string>

Card::Card(const string& rank, const string& suit) {
    if (rank.empty() || suit.empty()) {
        cerr << "Error: Rank or suit cannot be empty!" << endl;
    } else {
        this->rank = rank;
        this->suit = suit;
        faceUp = false;
    }
}

Card::Card() : rank(""), suit(""), faceUp(false) {}

void Card::flip() {
    faceUp = !faceUp;
}

ostream& operator<<(ostream& out, const Card& card) {
    out << string(card);
    return out;
}

istream& operator>>(istream& in, Card& card) {
    string rank, suit;
    in >> rank >> suit;
    card = Card(rank, suit);
    return in;
}

Card::operator string() const {
    stringstream sout;
    
    if (faceUp) {
        sout << rank << " of " << suit << endl;
    } else {
        sout << "Card is face down" << endl;
    }
    return sout.str();
}