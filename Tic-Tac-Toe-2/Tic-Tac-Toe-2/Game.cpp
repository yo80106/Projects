// Tic-Tac-Toe 2.0
// Game implementation - class represents a tic-tac-toe game
#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() : m_Current(FIRST)
{
}

bool Game::IsPlaying() const
{
	return (!m_Board.IsFull() &&
			!m_Board.IsWinner(m_Players[FIRST].GetPiece()) &&
			!m_Board.IsWinner(m_Players[SECOND].GetPiece()));
}

bool Game::IsTie() const
{
	return (m_Board.IsFull() &&
			!m_Board.IsWinner(m_Players[FIRST].GetPiece()) &&
			!m_Board.IsWinner(m_Players[SECOND].GetPiece()));
}

void Game::DisplayInstruction() const
{
	cout << "\tWelcome to the ultimate intellectual showdown: Tic-Tac-Toe.";
	cout << endl << endl;
	cout << "Make your move by entering a number, 0 - 8.  The number" << endl;
	cout << "corresponds with board position, as illustrated:" << endl << endl;

	cout << endl << "\t" << "0 | 1 | 2";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "3 | 4 | 5";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "6 | 7 | 8";

	cout << endl << endl << "Prepare yourself. The battle is about to begin.";
	cout << endl << endl;
}

void Game::NextPlayer()
{
	m_Current = (m_Current + 1) % NUM_PLAYER;
}

void Game::AnnounceWinner() const
{
	cout << "The raging battle has come to a final end.";
	cout << endl;

	if (IsTie())
	{
		cout << "Sadly, no player emerged victorious.";
		cout << endl;
	}
	else
	{
		cout << "The winner of this climatic";
		cout << "confrontation is Player ";
		if (m_Board.IsWinner(m_Players[FIRST].GetPiece()))
		{
			cout << m_Players[FIRST].GetPiece() << "!";
			cout << endl;
		}
		else
		{
			cout << m_Players[SECOND].GetPiece() << "!";
			cout << endl;
		}
	}
}

void Game::Play()
{
	m_Current = FIRST;
	m_Board.Reset();

	while (IsPlaying())
	{
		m_Board.Display();
		m_Players[m_Current].MakeMove(m_Board);
		NextPlayer();
	}
	m_Board.Display();
	AnnounceWinner();
}
