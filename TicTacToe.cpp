#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Player.h"


int main() 
{
	char turn = 'X';
	int choice;

	Board board;
	Player player;

	std::cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	std::cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	board.DisplayBoard();

	// Decide who's starting
	player.SetTurn(turn);

	// Player 1 input
	player.PlayerTurn();

	//Get the value of choice
	choice = player.GetChoice();

	// Update the board
	board.UpdateBoard(turn, choice);

	turn = board.GetTurn();

	player.SetTurn(turn);

	// Player 1 input
	player.PlayerTurn();

	//Get the value of choice
	choice = player.GetChoice();

	// Update the board
	board.UpdateBoard(turn, choice);

	/*while (Gameover())
	{
		Player_turn();
	}

	DisplayWinner();*/

	return 0;
}
