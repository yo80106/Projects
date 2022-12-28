// High Card - player with the highest card wins
// Game definition - represents a High Card game
#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Dealer.h"
#include "PlayerHC.h"
using namespace std;

class Game
{
public:
	Game();
	void DisplayInstructions() const;
	void SetPlayers();
	void Play();
protected:
	Dealer m_Dealer;
	vector<PlayerHC> m_PlayersHC;
};
#endif