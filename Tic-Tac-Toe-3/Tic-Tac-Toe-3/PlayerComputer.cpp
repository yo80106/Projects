// Tic-Tac-Toe 3.0 - AI
// Computer player definition - class represents a computer tic-tac-toe player
#include "PlayerComputer.h"
#include <iostream>
#include "Board.h"

using namespace std;

void PlayerComputer::MakeMove(Board & aBoard) const
{
	// copy and revise code from Tic-Tac-Toc 1.0
	unsigned int move = 0;
	bool found = false;

	// if computer can win on next move, that's the move to make
	while (!found && move < aBoard.NUM_SQUARES)
	{
		if (aBoard.IsLegalMove(move))
		{
			aBoard.ReceiveMove(GetPiece(), move);
			found = aBoard.IsWinner(GetPiece());
			aBoard.ReceiveMove(aBoard.EMPTY, move);
		}

		if (!found)
		{
			move++;
		}
	}

	// otherwise, if human can win on next move, that's the move to make
	if (!found)
	{
		move = 0;

		while (!found && move < aBoard.NUM_SQUARES)
		{
			if (aBoard.IsLegalMove(move))
			{
				aBoard.ReceiveMove(GetOpponentPiece(), move);
				found = aBoard.IsWinner(GetOpponentPiece());
				aBoard.ReceiveMove(aBoard.EMPTY, move);
			}

			if (!found)
			{
				move++;
			}
		}
	}

	// otherwise, moving to the best open square is the move to make
	if (!found)
	{
		move = 0;
		unsigned int i = 0;

		const int BEST_MOVES[] = { 4, 0, 2, 6, 8, 1, 3, 5, 7 };
		//pick best open square
		while (!found && i < aBoard.NUM_SQUARES)
		{
			move = BEST_MOVES[i];
			if (aBoard.IsLegalMove(move))
			{
				found = true;
			}
			i++;
		}
	}

	cout << "I, Player " << GetPiece();
	cout << ", shall take square number ";
	cout << move << "." << endl;
	aBoard.ReceiveMove(GetPiece(), move);
}
