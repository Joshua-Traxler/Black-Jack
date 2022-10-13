

#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <iomanip>
#include "gameDeck.h"

using namespace std;

int main()
{
    //gameDeck deck = gameDeck();
    int numDecks = 0;

    cin >> numDecks;

    gameDeck decks[40];

    for (int i=0;i<numDecks;i++)
    {
        decks[i].setCard(i + 1);
    }
    for (int i = numDecks-1; i >=0; i--)
    {
        cout << decks[i].test()<<endl;
    }

    //cout << deck.test();
}

