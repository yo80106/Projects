// Cards - foundation for card game
// Dealer implementation - dealer in a card game
#include "Dealer.h"
#include <iostream>
#include <algorithm>
#include "card.h"
using namespace std;

Dealer::Dealer(const string & name) : Player(name)
{
	Populate();
}

void Dealer::Populate()
{
	m_Cards.clear();

	//create standard deck
	for (int s = Card::CLUBS; s <= Card::SPADES; s++)
	{
		for (int r = Card::ACE; r <= Card::KING; r++)
		{
			AddCard(Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
		}
	}
}

void Dealer::Shuffle()
{
	random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Dealer::Deal(Player & aPlayer, int numCards)
{
	if (static_cast<int>(m_Cards.size()) < numCards)
	{
		cout << "Not enough cards to deal." << endl;
		return;
	}
	for (int i = 0; i < numCards; i++)
	{
		TransferCard(aPlayer);
	}
}

void Dealer::Deal(vector<Player>& players, int numCardsEach)
{
	if (m_Cards.size() < players.size() * numCardsEach)
	{
		cout << "Not enough cards to deal." << endl;
		return;
	}
	for (int i = 0; i < numCardsEach; i++)
	{
		vector<Player>::iterator iter;
		for (iter = players.begin(); iter != players.end(); iter++)
		{
			TransferCard(*iter);
		}
	}
}
