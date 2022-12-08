// Tic-Tac-Toe 2.0
// Board definition - class represents a tic-tac-toe board

//part of include guard - tests if BOARD_H not defined
#ifndef BOARD_H
#define BOARD_H

class Board
{
public:
	Board();
	bool IsFull() const;
	bool IsLegalMove(int move) const;
	bool IsWinner(const char piece) const;
	void Display() const;
	void Reset();
	void ReceiveMove(char piece, int move);
private:
	static const int NUM_SQUARES = 9;
	static const char EMPTY = ' ';
	static const int NUM_COMBOS = 8;
	static const int NUM_IN_COMBO = 3;
	static const int WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO];
	char m_Squares[NUM_SQUARES];
};
#endif