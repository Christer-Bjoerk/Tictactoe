#include "GameManager.h"
#include <iostream>

void GameManager::UpdateBoard(char& turn, int& row, int& column)
{
	// Update the board
	boardArea[row][column] = turn;
}

bool GameManager::GameOver() 
{
	// Debugging the board
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << boardArea[i][j];
		}
	}*/

	// Check if the game is ongoing
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (boardArea[i][j] != 'X' && boardArea[i][j] != '0' && playedTurns <= 9)
			{
				playedTurns++;
				return false;
			}
			else if (playedTurns > 9)
			{
				std::cout << "It's a draw \n";

				// Display draw
				draw = true;

				return true;
			}
		}
	}


	// Check for a straight win
	for (int i = 0; i < 3; i++)
	{
		if  (boardArea[i][0] == boardArea[i][1] && boardArea[i][0] == boardArea[i][2] ||
			 boardArea[0][i] == boardArea[1][i] && boardArea[0][i] == boardArea[2][i])
		{
			std::cout << "Game is over \n";

			return true;
		}
	}

	// Check for a diagonal win
	if (boardArea[0][0] == boardArea[1][1] && boardArea[0][0] == boardArea[2][2] ||
		boardArea[0][2] == boardArea[1][1] && boardArea[0][2] == boardArea[2][0])
	{
		std::cout << "Game is over \n";

		return true;
	}

	return false;
}

void GameManager::DisplayWinner(char player) 
{
	if (player == 'X')
	{
		std::cout << "Player 1 won ";
	}
	else if (player == 'O')
	{
		std::cout << "Player 2 won ";
	}
}

