// High Card - player with the highest card wins
// OutOfCards definition - exception for out of cards
#ifndef OUTOFCARDS_H
#define OUTOFCARDS_H
#include <stdexcept>
using namespace std;

class OutOfCards : public runtime_error
{
public:
	OutOfCards(const string& name = "");
	const string& GetName() const;
protected:
	string m_Name;
};

#endif