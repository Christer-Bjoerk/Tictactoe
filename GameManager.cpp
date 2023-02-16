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

	// Check for a straight win
	for (int i = 0; i < 3; i++)
	{
		if  (boardArea[i][0] == boardArea[i][1] && boardArea[i][0] == boardArea[i][2] ||
			 boardArea[0][i] == boardArea[1][i] && boardArea[0][i] == boardArea[2][i])
		{
			std::cout << "Game is over";
			return true;
		}
	}

	// Check for a diagonal win
	if (boardArea[0][0] == boardArea[1][1] && boardArea[0][0] == boardArea[2][2] ||
		boardArea[0][2] == boardArea[1][1] && boardArea[0][2] == boardArea[2][0])
	{
		std::cout << "Game is over";
		return true;
	}

	return false;
}

