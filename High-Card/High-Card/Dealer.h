// High Card - player with the highest card wins
// Dealer definition - dealer in a card game

#ifndef DEALER_H
#define DEALER_H

#include "Player.h"
#include <string>
#include <vector>
#include "NotEnoughCards.h"
using namespace std;

class Dealer : public Player
{
public:
	Dealer(const string& name = "Dealer");
	void Populate();
	void Shuffle();
	void Deal(Player& aPlayer, int numCards = 1);
	//function template declaration
	template<typename T>
	void Deal(typename vector<T>& players, int numCardsEach = 1);
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