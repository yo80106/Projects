// Tic-Tac-Toe 2.0
// Board implementation - class represents a tic-tac-toe board
#include "Board.h"
#include <iostream>
using namespace std;

const int Board::WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO] = { { 0, 1, 2 },
															  { 3, 4, 5 },
															  { 6, 7, 8 },
															  { 0, 3, 6 },
															  { 1, 4, 7 },
															  { 2, 5, 8 },
															  { 0, 4, 8 },
															  { 2, 4, 6 } };

Board::Board()
{
	Reset();
}

bool Board::IsFull() const
{
	bool full = true;
	int i = 0;
	while (full && i < NUM_SQUARES)
	{
		if (m_Squares[i] == EMPTY)
		{
			full = false;
		}
		i++;
	}
	return full;
}

bool Board::IsLegalMove(int move) const
{
	return (move >= 0 && move < NUM_SQUARES && m_Squares[move] == EMPTY);
}

bool Board::IsWinner(const char piece) const
{
	bool winner = false;
	int i = 0;
	while (!winner && i < NUM_COMBOS)
	{
		int piecesInCombe = 0;
		for (int j = 0; j < NUM_IN_COMBO; j++)
		{
			if (m_Squares[WINNING_COMBOS[i][j]] == piece)
			{
				piecesInCombe++;
			}
		}
		if (piecesInCombe == NUM_IN_COMBO)
		{
			winner = true;
		}
		i++;
	}
	return winner;
}

void Board::Display() const
{
	cout << "\n\t" << m_Squares[0] << " | " << m_Squares[1] << " | " << m_Squares[2];
	cout << "\n\t" << "---------";
	cout << "\n\t" << m_Squares[3] << " | " << m_Squares[4] << " | " << m_Squares[5];
	cout << "\n\t" << "---------";
	cout << "\n\t" << m_Squares[6] << " | " << m_Squares[7] << " | " << m_Squares[8];
	cout << "\n\n";
}

void Board::Reset()
{
	for (int i = 0; i < NUM_SQUARES; i++)
	{
		m_Squares[i] = EMPTY;
	}
}

void Board::ReceiveMove(char piece, int move)
{
	m_Squares[move] = piece;
}
