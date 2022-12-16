// Tic-Tac-Toe 3.0 - AI
// Player definition - abstract class represents a tic-tac-toe player

// part of include guard - tests if PLAYER_H not defined
#ifndef PLAYER_H
#define PLAYER_H

// forward declaration of Board class
class Board;

// abstract class
class Player
{
public:
	Player();
	virtual ~Player() = default;
	char GetPiece() const;
	char GetOpponentPiece() const;
	// pure virtual function
	virtual void MakeMove(Board& aBoard) const = 0;

private:
	static const int NUM_PIECES = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	static const char PIECES[NUM_PIECES];
	static int current;
	char m_Piece;
};
#endif // PLAYER_H