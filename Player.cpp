#include "Player.h"
#include <iostream>

using namespace std;

void Player::PlayerTurn()
{
	if (players[0])
	{
		cout << "Player " << players[0] << " turn :";
	}
	else if (players[1])
	{
		cout << "Player " << players[1] << " turn :";
	}
	cin >> choice;

	target->UpdateBoard(choice);
}