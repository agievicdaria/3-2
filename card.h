#pragma once
using namespace std;
#include <string>
#include <iostream>

class Card {
private:
    string rank;
    string suit;
    bool faceUp;

public:
    Card(const string& rank, const string& suit);
    Card(); 
    void flip();

    string getRank() const { return rank; }
    string getSuit() const { return suit; }
    bool isFaceUp() const { return faceUp; }

    void setRank(const string& rank) { this->rank = rank; }
    void setSuit(const string& suit) { this->suit = suit; }
    void setFaceUp(bool faceUp) { this->faceUp = faceUp; }

    friend istream& operator>>(istream& in, Card& сard);
    friend ostream& operator<<(ostream& out, const Card& сard);
    operator string() const;
};
