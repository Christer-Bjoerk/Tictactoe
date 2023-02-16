#include "Board.h"
#include <iostream>

using namespace std;

void Board::DisplayBoard() 
{
	// Drawing the board using characters
	cout << " PLAYER 1 [X]\t PLAYER 2 [O]\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << boardArea[0][0] << "  |  " << boardArea[0][1] << "  |  " << boardArea[0][2] << " \n";
	cout << "\t_____|_____|_____\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << boardArea[1][0] << "  |  " << boardArea[1][1] << "  |  " << boardArea[1][2] << " \n";
	cout << "\t_____|_____|_____\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << boardArea[2][0] << "  |  " << boardArea[2][1] << "  |  " << boardArea[2][2] << " \n";
}

void Board::UpdateBoard(char player, int choice)
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
		cout << "Invalid move \n\n";
		break;
	}
	
	// needs the player turn
	SwitchTurn(player, row, column);
}

void Board::SwitchTurn(char player,int row, int column) 
{
	if (player == 'X' && boardArea[row][column] != 'X' && boardArea[row][column] != 'O')
	{
		// Replace symbol
		boardArea[row][column] = 'X';
		// Update board
		DisplayBoard();
		// Switch turn
		player = 'O';
		SetTurn(player);
	}
	else if (player == 'O' && boardArea[row][column] != 'X' && boardArea[row][column] != 'O')
	{
		// Replace symbol
		boardArea[row][column] = 'O';
		// Update board
		DisplayBoard();
		// Switch turn
		player = 'X';
		SetTurn(player);
	}
	else
	{
		std::cout << "Invalid move \n\n";
	}
}
