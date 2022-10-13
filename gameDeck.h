#pragma once
class gameDeck
{ public:

	gameDeck()
	{

	}
	
	gameDeck(int a)
	{
		card = a;
	}

	int test()
	{
		return card;
	}

	void setCard(int x)
	{
		card = x;
	}

	private: int card = 0;
};


