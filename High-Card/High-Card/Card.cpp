// Cards - foundation for card game
// Card implementation - playing card

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

Card::Card(rank r, suit s) : m_Rank(r), m_Suit(s)
{}

Card::rank Card::GetRank() const
{
	return m_Rank;
}

Card::suit Card::GetSuit() const
{
	return m_Suit;
}

void Card::Display() const
{
	const string RANKS[] = { "A", "2", "3", "4",
							 "5", "6", "7", "8",
							 "9", "10", "J", "Q", "K" };
	const string SUITS[] = { "c", "d", "h", "s" };
	cout << RANKS[m_Rank] << SUITS[m_Suit];
}
