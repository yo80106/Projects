// Cards - foundation for card game
// Player definition - player in a card game

#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>
#include <string>

using namespace std;

class Player
{
public:
	Player(const string& name = "");
	const string& GetName() const;
	void Display() const;
	void AddCard(const Card& aCard);
	void TransferCard(Player& other);
protected:
	string m_Name;
	vector<Card> m_Cards;
};
#endif
