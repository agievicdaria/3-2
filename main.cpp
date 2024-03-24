#include <iostream>
#include "sequentialdeck.h"
#include "randomdeck.h"
#include <string>
using namespace std;

int main() {
    SequentialDeck seqDeck;
    cout << "Sequential Deck:" << endl;
    cout << seqDeck << endl;

    RandomDeck randDeck;
    cout << "Random Deck:" << endl;
    cout << randDeck << endl;

    DeckOfCards customDeck(36);
    cout << "custom Deck:" << endl;
    cout << customDeck << endl;

    DeckOfCards::processDeck(seqDeck);
    DeckOfCards::processDeck(randDeck); 
    DeckOfCards::processDeck(customDeck); 

    return 0;
}