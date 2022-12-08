// Tic-Tac-Toe 2.0
// Game definition - class represents a tic-tac-toe game

//part of include guard - tests if GAME_H not defined
#ifndef GAME_H
#define GAME_H

#include "Board.h";
#include "Player.h";

class Game
{
public:
	Game();
	bool IsPlaying() const;
	bool IsTie() const;
	void DisplayInstruction() const;
	void NextPlayer();
	void AnnounceWinner() const;
	void Play();

private:
	static const int NUM_PLAYER = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	Board m_Board;
	Player m_Players[NUM_PLAYER];
	int m_Current;
};
#endif