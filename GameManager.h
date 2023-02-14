#pragma once
#include "Board.h"

class GameManager
{
public:
	bool CheckWin();
	bool GameOver();
	void SetTarget(Board* board) { target = board; }
private:
	Board* target;
	int playedTurns = 0;
	bool draw = false;
};

