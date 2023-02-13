#pragma once
#include "Board.h"

class GameManager
{
public:
	bool GameOver();
	void SetTarget(Board* board) { target = board; }
private:
	Board* target;
};

