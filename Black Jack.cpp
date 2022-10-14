

#include "lib.h"
#include "gameDeck.cpp"

using namespace std;

int main()
{
    gameDeck deck = gameDeck();
    int numDecks = 0;

    //cin >> numDecks;

    //gameDeck decks[40];

    deck.buildDeck();
    
    for(int i = 0; deck.getDeckList().size()>i; i++)
    {
        cout <<deck.getDeckList().at(i);
    }

    //cout << deck.test();
}

