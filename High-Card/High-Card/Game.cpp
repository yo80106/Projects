// High Card - player with the highest card wins
// Game implementation - represents a High Card game
#include "Game.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

Game::Game()
{}

void Game::DisplayInstructions() const
{
	cout << "\tWelcome to High Card!";
	cout << endl << endl;
	cout << "Each player gets a single card but ";
	cout << "may exchange it for another" << endl;
	cout << "from the dealer. The player with the ";
	cout << "highest card wins. The highest " << endl;
	cout << "card is a king while the lowest ";
	cout << "card is an ace. Good luck!" << endl << endl;
}

void Game::SetPlayers()
{
	cout << "Enter a name for each player. ";
	cout << "You must enter at least one name." << endl;
	cout << "Press 'Enter' when done." << endl;

	m_PlayersHC.clear();
	string name;

	do 
	{
		cout << "Player name: ";
		getline(cin, name);
		if (name != "")
		{
			m_PlayersHC.push_back(name);
		}
	} while (name != "" || m_PlayersHC.empty());
	cout << endl;
}

void Game::Play()
{
	SetPlayers();
	m_Dealer.Shuffle();

	//call involving function template
	m_Dealer.Deal(m_PlayersHC);

	vector<PlayerHC>::const_iterator const_iter;
	vector<PlayerHC>::iterator iter;

	for (const_iter = m_PlayersHC.begin(); const_iter != m_PlayersHC.end(); ++const_iter)
	{
		const_iter->Display();
		cout << endl;
	}

	for (iter = m_PlayersHC.begin(); iter != m_PlayersHC.end(); ++iter)
	{
		cout << iter->GetName() << ", ";
		cout << "do you want a new card? (y/n): ";
		char answer;
		cin >> answer;

		if (answer == 'y')
		{
			iter->TransferCard(m_Dealer);
			m_Dealer.Shuffle();
			m_Dealer.Deal(*iter);
			iter->Display();
			cout << endl;
		}
	}
	cout << endl;
	const Player winner = *max_element(m_PlayersHC.begin(), m_PlayersHC.end());
	cout << "And the winner is... " << winner.GetName() << endl;

	for (iter = m_PlayersHC.begin(); iter != m_PlayersHC.end(); ++iter)
	{
		iter->TransferCard(m_Dealer);
	}
}
