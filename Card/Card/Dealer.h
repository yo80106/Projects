// Cards - foundation for card game
// Dealer definition - dealer in a card game

#ifndef DEALER_H
#define DEALER_H

#include "player.h"
using namespace std;

class Dealer : public Player
{
public:
	Dealer(const string& name = "Dealer");
	void Populate();
	void Shuffle();
	void Deal(Player& aPlayer, int numCards = 1);
	void Deal(vector<Player>& players, int numCardsEach = 1);
};
#endif