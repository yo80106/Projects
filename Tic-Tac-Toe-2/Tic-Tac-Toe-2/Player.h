// Tic-Tac-Toe 2.0
// Player definition - class represents a tic-tac-toe player

// part of include guard - tests if PLAYER_H not defined
#ifndef PLAYER_H
#define PLAYER_H

// forward declaration of Board class
class Board;

class Player
{
public:
	Player();
	char GetPiece() const;
	void MakeMove(Board& aBoard) const;

private:
	static const int NUM_PIECES = 2;
	static const char PIECES[NUM_PIECES];
	static int current;
	char m_Piece;
};
#endif // PLAYER_H