#pragma once
#include "Board.h"
#include "Player.h"

class GameManager
{
public:
	bool CheckWin();
	bool GameOver();
	void SetBoard(Board* board) { target = board; }
	void SetPlayers(Player* target) { target = player; }

private:
	Board* target;
	Player* player;

	int playedTurns = 0;
	bool draw = false;
};

