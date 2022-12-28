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
#endif