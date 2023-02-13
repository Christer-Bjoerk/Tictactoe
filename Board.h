#ifndef BOARD_H
#define BOARD_H

#include <iostream>

using namespace std;

class Board
{
public:
	void Display_board();
	void UpdateBoard(int boardNumber);
	bool isBoardOccupied();
	char boardArea[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
private:
	int row, column;
};
#endif
