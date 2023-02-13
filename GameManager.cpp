#include "GameManager.h"

bool GameManager::GameOver()
{
	for (int i = 0; i < 3; i++)
	{
		if (target->boardArea[i][0] == target->boardArea[i][1] && target->boardArea[i][0] == target->boardArea[i][2] ||
			target->boardArea[0][i] == target->boardArea[1][i] && target->boardArea[0][i] == target->boardArea[2][i])
		{
			return true;
		}
	}



    return false;
}
