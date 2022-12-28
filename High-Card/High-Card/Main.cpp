// High Card - player with high card wins
// Main function
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	Game HighCard;
	char again;

	HighCard.DisplayInstructions();

	do
	{
		HighCard.Play();
		cout << endl << "Play again? (y/n): ";
		cin >> again;
		cout << endl;
	} while (again == 'y');

	return 0;
}