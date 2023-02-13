#include "Board.h"

class Player
{
public:
	void PlayerTurn();

	int players[2] = { 1,2 };
	char playerCharacters[2] = { 'X','O' };

	void SetTarget(Board* board) { target = board; }
private:
	Board* target;
	int choice;
};

