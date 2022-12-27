// Cards - foundation for card game
// Main function
#include <iostream>
#include "player.h"
#include "dealer.h"
using namespace std;

int main()
{
	cout << "\tWelcome to Cards!" << endl << endl;

	Dealer dlr;
	dlr.Display();
	cout << endl << endl;

	dlr.Shuffle();
	dlr.Display();
	cout << endl << endl;

	Player plyr("Mike");
	plyr.Display();
	cout << endl << endl;

	dlr.Deal(plyr, 5);
	plyr.Display();
	cout << endl << endl;

	dlr.Display();
	cout << endl << endl;

	vector<Player> plyrs;
	plyrs.push_back(Player("Moe"));
	plyrs.push_back(Player("Larry"));
	plyrs.push_back(Player("Curly"));

	dlr.Deal(plyrs, 5);

	vector<Player>::const_iterator iter;
	for (iter = plyrs.begin(); iter != plyrs.end(); iter++)
	{
		iter->Display();
		cout << endl << endl;
	}

	dlr.Display();
	cout << endl << endl;

	//player returns a card to dealer
	plyr.TransferCard(dlr);
	plyr.Display();
	cout << endl << endl;
	dlr.Display();
	cout << endl << endl;
	return 0;
}