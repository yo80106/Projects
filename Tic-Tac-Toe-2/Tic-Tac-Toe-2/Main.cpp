// Tic-Tac-Toe 2.0
// Main function
#include "Game.h"
#include <iostream>

int main()
{
	Game ticTacToe;
	ticTacToe.DisplayInstruction();
	char again;
	do 
	{
		ticTacToe.Play();
		std::cout << std::endl << "Play again? (y/n): ";
		std::cin >> again;
	} while (again != 'n');
	return 0;
}