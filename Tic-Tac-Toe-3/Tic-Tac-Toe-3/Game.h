// Tic-Tac-Toe 3.0 - AI
// Game definition - class represents a tic-tac-toe game

//part of include guard - tests if GAME_H not defined
#ifndef GAME_H
#define GAME_H

#include "Board.h";
class Player;

class Game
{
public:
	Game();
	~Game();
	bool IsPlaying() const;
	bool IsTie() const;
	void ClearPlayers();
	void SetPlayers();
	void DisplayInstruction() const;
	void NextPlayer();
	void AnnounceWinner() const;
	void Play();

private:
	static const int NUM_PLAYER = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	Board m_Board;
	Player* m_Players[NUM_PLAYER];
	int m_Current;
};
#endif