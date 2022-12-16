// Tic-Tac-Toe 3.0 - AI
// Player definition - abstract class represents a tic-tac-toe player
#include "Player.h"
#include <iostream>
#include "Board.h"
using namespace std;

const char Player::PIECES[NUM_PIECES] = { 'X', 'O' };
int Player::current = 0;

Player::Player()
{
	// Fixing the first player use 'X'
	m_Piece = PIECES[current];
	current = (current + 1) % NUM_PIECES;
}

char Player::GetPiece() const
{
	return m_Piece;
}

char Player::GetOpponentPiece() const
{
	char piece;

	if (m_Piece == PIECES[FIRST])
	{
		piece = PIECES[SECOND];
	}
	else
	{
		piece = PIECES[FIRST];
	}
	return piece;
}

void Player::MakeMove(Board & aBoard) const
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
