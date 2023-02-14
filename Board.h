#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include "Player.h"

using namespace std;

class Board
{
public:
	void Display_board();
	void UpdateBoard(int boardNumber);
	bool IsBoardOccupied();
	char boardArea[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

	void SwitchTurn(int index);

private:
	Player* player;
	int row, column;
};
#endif
