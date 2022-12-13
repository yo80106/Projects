// Tic-Tac-Toe 3.0 - AI
// Computer player definition - class represents a computer tic-tac-toe player

#ifndef PLAYERCOMPUTER_H
#define PLAYERCOMPUTER_H

#include "Player.h"
class Board;

class PlayerComputer : public Player
{
public:
	virtual void MakeMove(Board& aBoard) const override;
};

#endif