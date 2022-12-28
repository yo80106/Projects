// High Card - player with the highest card wins
// PlayerHC definition - player in a game of High Card
#ifndef PLAYERHC_H
#define PLAYERHC_H
#include <string>
#include "Player.h"
#include "Dealer.h"
class Card;
using namespace std;

class PlayerHC : public Player
{
public:
	PlayerHC(string name = "");
	const Card& GetFirstCard() const;
	bool operator <(const PlayerHC& other) const;
};

// function template definition
template<typename T>
void Dealer::Deal(vector<T>& players, int numCardsEach)
{
	if (m_Cards.size() < players.size() * numCardsEach)
	{
		throw NotEnoughCards(m_Name, static_cast<int>(m_Cards.size()));
	}
	for (int i = 0; i < numCardsEach; i++)
	{
		typename vector<T>::iterator iter;
		for (iter = players.begin(); iter != players.end(); iter++)
		{
			TransferCard(*iter);
		}
	}
}
#endif