// High Card - player with the highest card wins
// NotEnoughCards definition - exception for not enough cards
#ifndef NOTENOUGHCARDS_H
#define NOTENOUGHCARDS_H
#include <stdexcept>
using namespace std;

class NotEnoughCards : public runtime_error
{
public:
	NotEnoughCards(const string& name = "", int numCards = 0);
	const string& GetName() const;
	int GetNumCards() const;
protected:
	string m_Name;
	int m_NumCards;
};
#endif