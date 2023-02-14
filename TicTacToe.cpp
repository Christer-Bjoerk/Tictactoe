#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Player.h"
#include "GameManager.h"

using namespace std;

int main() 
{
	Board board;
	Player currentPlayer;
	GameManager gm;

	gm.SetBoard(&board);
	gm.SetPlayers(&currentPlayer);
	currentPlayer.SetTarget(&board);

	cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	board.Display_board();

	while (!gm.GameOver())
	{
		currentPlayer.PlayerTurn();
	}

	return 0;
}
