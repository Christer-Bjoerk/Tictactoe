#include "GameManager.h"
#include <iostream>

void GameManager::UpdateGameProgress(char& turn, int& row, int& column)
{
	// Update the board
	boardArea[row][column] = turn;
	// Check who's currently playing
	currentTurn = turn;
}

bool GameManager::GameOver() 
{
	// Check for a straight win
	for (int i = 0; i < 3; i++)
	{
		if  (boardArea[i][0] == boardArea[i][1] && boardArea[i][0] == boardArea[i][2] ||
			 boardArea[0][i] == boardArea[1][i] && boardArea[0][i] == boardArea[2][i])
		{
			DisplayWinner();
			return true;
		}
	}

	// Check for a diagonal win
	if (boardArea[0][0] == boardArea[1][1] && boardArea[0][0] == boardArea[2][2] ||
		boardArea[0][2] == boardArea[1][1] && boardArea[0][2] == boardArea[2][0])
	{
		DisplayWinner();
		return true;
	}

	// Check if it's a draw 
	draw = (playedTurns <= 9) ? false, playedTurns++ : true, DisplayWinner();
	return (playedTurns <= 9) ? false : true;

	return false;
}

// Display the winner by checking the current player 
void GameManager::DisplayWinner() 
{
	if (currentTurn == 'X' && !draw)
	{
		std::cout << "Player 1 won ";
	}
	else if (currentTurn == 'O' && !draw)
	{
		std::cout << "Player 2 won ";
	}
	else if (draw)
	{
		std::cout << "It's a draw \n";
	}
}

