#include "Board.h"

void Board::Display_board() 
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

void Board::UpdateBoard(int boardNumber)
{
	switch (boardNumber)
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

	// Check if the board has the character or not
	if (IsBoardOccupied())
	{
		// if it's occupied, ask the player to choose another space on the board
		cout << "Space is occupied ";

		//Retry;
	}
	else if(!IsBoardOccupied())
	{	

		// if player 1
		if ()
		{

		}

		// if player 2

		//// if not replace the character and update the board
		//for (int i = 0; i < 2; i++)
		//{
		//	if (i == 0)
		//	{
		//		boardArea[row][column] = 'X';
		//		// Update board
		//		Display_board();
		//		return;
		//	}
		//	else if (i == 1)
		//	{
		//		boardArea[row][column] = 'O';
		//		// Update board
		//		Display_board();
		//		return;
		//	}
		//}
	}
}

bool Board::IsBoardOccupied() 
{
	return (boardArea[row][column] == 'X' || boardArea[row][column] == '0') ? true : false;
}

