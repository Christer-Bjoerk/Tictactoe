#include "Player.h"
#include <iostream>

void Player::PlayerTurn()
{
	if (turn == 'X')
	{
		std::cout << "Player 1's turn" << turn;
	}
	else if (turn == 'O')
	{
		std::cout << "Player 2's turn";
	}

	std::cin >> choice;

	SetChoice(choice);
}

