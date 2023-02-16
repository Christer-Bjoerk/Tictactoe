#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Player.h"
#include "GameManager.h"

int main() 
{
	char turn = 'X';
	int choice;

	Board board;
	Player player;
	GameManager gameManager;

	std::cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	std::cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	board.DisplayBoard();

	// Decide who's starting
	player.SetTurn(turn);

	while (!gameManager.GameOver())
	{
		// Player 1 input
		player.PlayerTurn();

		// Get the value of choice
		choice = player.GetChoice();

		// Update the board
		board.UpdateBoard(turn, choice);

		// Update the game manager
		gameManager.UpdateBoard(turn, board.GetRow(), board.GetColumn());

		// Switch player turn
		turn = board.GetTurn();

		// The other player gets their turn
		player.SetTurn(turn);
	}
	return 0;
}
