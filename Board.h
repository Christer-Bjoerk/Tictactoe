#pragma once
#include <iostream>

using namespace std;

class Board
{
public:
	void Display_board()
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
private:
	char boardArea[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
	int row, column;
};

