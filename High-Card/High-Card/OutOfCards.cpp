// High Card - player with the highest card wins
// OutOfCards implementation - exception for out of cards
#include "OutOfCards.h"
#include <stdexcept>
using namespace std;

OutOfCards::OutOfCards(const string & name) : runtime_error("OutOfCards"), m_Name(name)
{}

const string & OutOfCards::GetName() const
{
	return m_Name;
}
