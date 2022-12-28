// High Card - player with the highest card wins
// PlayerHC definition - player in a game of High Card
#ifndef PLAYERHC_H
#define PLAYERHC_H
#include <string>
#include "Player.h"
class Card;
using namespace std;

class PlayerHC : public Player
{
public:
	PlayerHC(string name = "");
	const Card& GetFirstCard() const;
	bool operator <(const PlayerHC& other) const;
};
#endif