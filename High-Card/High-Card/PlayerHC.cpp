// High Card - player with the highest card wins
// PlayerHC implementation - player in a game of High Card
#include "PlayerHC.h"
#include <iostream>

#include "Card.h"
#include "OutOfCards.h"

using namespace std;

PlayerHC::PlayerHC(string name) : Player(name)
{}

const Card & PlayerHC::GetFirstCard() const
{
	if (m_Cards.empty())
	{
		throw OutOfCards(m_Name);
	}
	return m_Cards.front();
}

bool PlayerHC::operator<(const PlayerHC & other) const
{
	bool result;
	try
	{
		const Card& thisCard = m_Cards.front();
		const Card& otherCard = other.GetFirstCard();

		if (thisCard.GetRank() != otherCard.GetRank())
		{
			result = thisCard.GetRank() < otherCard.GetRank();
		}
		else
		{
			result = thisCard.GetSuit() < otherCard.GetSuit();
		}
	}
	catch (OutOfCards& e)
	{
		cout << "Exception occurred: " << e.what() << endl;
		cout << "Name: " << e.GetName() << endl;
		exit(1);
	}
	return result;
}