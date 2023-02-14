#include "GameManager.h"

bool GameManager::GameOver()
{
	// Check for a straight win
	for (int i = 0; i < 3; i++)
	{
		if (target->boardArea[i][0] == target->boardArea[i][1] && target->boardArea[i][0] == target->boardArea[i][2] ||
			target->boardArea[0][i] == target->boardArea[1][i] && target->boardArea[0][i] == target->boardArea[2][i])
		{
			return true;
		}
	}

	// Check for a win diagonal
	if (target->boardArea[0][0] == target->boardArea[1][1] && target->boardArea[0][0] == target->boardArea[2][2] ||
		target->boardArea[0][2] == target->boardArea[1][1] && target->boardArea[0][2] == target->boardArea[2][0])
	{
		return true;
	}

	// Check if the game is ongoing
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (target->boardArea[i][j] != 'X' && target->boardArea[i][j] != '0')
			{
				return false;
			}
		}
	}
    return false;
}
