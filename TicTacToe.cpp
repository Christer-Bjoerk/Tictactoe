#include <iostream>
#include <stdlib.h>
#include "Board.h"

using namespace std;

Board board;

int main() 
{
	cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	board.Display_board();

	return 0;
}
