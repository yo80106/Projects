// Tic-Tac-Toe 3.0 - AI
// Human player definition - class represents a human tic-tac-toe player

#ifndef PLAYERHUMAN_H
#define PLAYERHUMAN_H

#include "Player.h"
class Board;

class PlayerHuman : public Player
{
public:
	virtual void MakeMove(Board& aBoard) const override;
};

#endif
