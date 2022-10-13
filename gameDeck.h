#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class gameDeck
{ public:
	string cont;
	gameDeck()
	{

	}

	void buildDeck()
	{
		
		ifstream file ("DeckList.txt");
		int count = 0;
		//cout<<char(file.get());
		while (file.is_open() && file.good())
		{
			deckList.insert(deckList.begin()+count, file.get());
			count++;
		}
		for (int i = 0;deckList.size()>i;i++)
		{
			//cout << char(deckList.at(i));
		}
		
	}

	vector<char> getDeckList()
	{
		return deckList;
	}
	
	

private:;
		vector <char> deckList;

};


