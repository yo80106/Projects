// Cards - foundation for card game
// Player implementation - player in a card game
#include "Player.h"
#include <iostream>
#include <vector>
#include "card.h"
using namespace std;

Player::Player(const string & name) : m_Name(name)
{}

const string & Player::GetName() const
{
	return m_Name;
}

void Player::Display() const
{
	cout << m_Name << ":\t";

	//if no cards, display message and end function call
	if (m_Cards.empty())
	{
		cout << "<no cards>";
	}
	//otherwise, display cards
	else
	{
		//iterate over vector, displaying each Card object
		vector<Card>::const_iterator iter;
		for (iter = m_Cards.begin(); iter != m_Cards.end(); iter++)
		{
			iter->Display();
			cout << "\t";
		}
	}
}

void Player::AddCard(const Card & aCard)
{
	m_Cards.push_back(aCard);
}

void Player::TransferCard(Player & other)
{
	if (m_Cards.empty())
	{
		cout << "Out of cards!";
		return;
	}
	other.AddCard(m_Cards.back());
	m_Cards.pop_back();
}
