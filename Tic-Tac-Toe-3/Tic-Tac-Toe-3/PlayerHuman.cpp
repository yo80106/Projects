// Tic-Tac-Toe 3.0 - AI
// Human player definition - class represents a human tic-tac-toe player
#include "PlayerHuman.h"
#include <iostream>
#include "Board.h"

using namespace std;

void PlayerHuman::MakeMove(Board & aBoard) const
{
	int move;

	do
	{
		cout << "Player " << GetPiece();
		cout << ", where would you like to move? (0-8): ";
		cin >> move;
	} while (!aBoard.IsLegalMove(move));
	aBoard.ReceiveMove(GetPiece(), move);
}
