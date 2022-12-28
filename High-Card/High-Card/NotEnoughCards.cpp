// High Card - player with the highest card wins
// NotEnoughCards implementation - exception for not enough cards
#include "NotEnoughCards.h"
#include <stdexcept>
using namespace std;

NotEnoughCards::NotEnoughCards(const string& name, int numCards) : runtime_error("NotEnoughCards"), m_Name(name), m_NumCards(numCards)
{}

const string & NotEnoughCards::GetName() const
{
	return m_Name;
}

int NotEnoughCards::GetNumCards() const
{
	return m_NumCards;
}
