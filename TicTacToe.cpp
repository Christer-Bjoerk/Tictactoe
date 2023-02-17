#include <iostream>
#include <stdlib.h>
#include "Board.h"

using namespace std;

int choice;
int row, column;

int playedTurns = 1;

char turn = 'X';

bool draw = false; 

void Player_turn();

Board board;

void SwitchTurn()
{
	switch (choice)
	{
	case 1: row = 0; column = 0;
		break;
	case 2: row = 0; column = 1;
		break;
	case 3: row = 0; column = 2;
		break;
	case 4: row = 1; column = 0;
		break;
	case 5: row = 1; column = 1;
		break;
	case 6: row = 1; column = 2;
		break;
	case 7: row = 2; column = 0;
		break;
	case 8: row = 2; column = 1;
		break;
	case 9: row = 2; column = 2;
		break;
	default:
		cout << "Invalid move";
		break;
	}
	
	// Check if the row & column isn't occupied
	if (turn == 'X' && board.boardArea[row][column] != 'X' && board.boardArea[row][column] != 'O')
	{
		board.boardArea[row][column] = 'X';
		turn = 'O';
		playedTurns++;

		board.DisplayBoard();
	}
	else if (turn == 'O' && board.boardArea[row][column] != 'O' && board.boardArea[row][column] != 'X')
	{
		board.boardArea[row][column] = 'O';
		turn = 'X';
		playedTurns++;

		board.DisplayBoard();
	}
	else if(turn == 'X' && board.boardArea[row][column] == 'O' || turn == 'X' && board.boardArea[row][column] == 'X'||
			turn == 'O' && board.boardArea[row][column] == 'O' || turn == 'O' && board.boardArea[row][column] == 'X')
	{
		cout << "Box already filled!\n Please choose another!! \n";
		Player_turn();
	}
}

void Player_turn()
{
	if (turn == 'X')
	{
		cout << "\n Player 1 [X] turn : ";
	}
	else if (turn == 'O')
	{
		cout << "\n Player 2 [O] turn : ";
	}
	cin >> choice;

	SwitchTurn();
};

bool Gameover() 
{
	// Check for win for simple rows & columns
	for (int i = 0; i < 3; i++)
	{
		if (board.boardArea[i][0] == board.boardArea[i][1] && board.boardArea[i][0] == board.boardArea[i][2] ||
			board.boardArea[0][i] == board.boardArea[1][i] && board.boardArea[0][i] == board.boardArea[2][i])
		{
			return false;
		}
	}

	// Check for a win diagonal
	if (board.boardArea[0][0] == board.boardArea[1][1] && board.boardArea[0][0] == board.boardArea[2][2] ||
		board.boardArea[0][2] == board.boardArea[1][1] && board.boardArea[0][2] == board.boardArea[2][0])
	{
		return false;
	}
	
	// Check if the game is ongoing
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board.boardArea[i][j] != 'X' && board.boardArea[i][j] != '0' && playedTurns <= 9)
			{
				return true;
			}
			else if (playedTurns > 9)
			{
				draw = true;
				return false;
			}
		}
	}

	return false;
}

// Display who won after the game is finished
void DisplayWinner() 
{
	// Triggers after the game is finished
	if (turn == 'X' && !draw)
	{
		// The game will switch the player's turn one more time after the game is finished
		// hence whom to be congraluted is swithed around.
		cout << "\n\n Congratulations! Player with '0' has won the game";
	}
	else if (turn == 'O' && !draw)
	{
		cout << "\n\n Congratulations! Player with 'X' has won the game";
	}
	else if (turn == 'O' && draw || turn == 'X' && draw)
	{
		cout << "\n\n It's a draw";
	}
}

int main() 
{
	cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	board.DisplayBoard();

	while (Gameover())
	{
		Player_turn();
	}

	DisplayWinner();

	return 0;
}
