#include <iostream>
#include <stdlib.h>

using namespace std;

char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int row, column;

void Display_board()
{
	// Drawing the board using characters
	cout << " PLAYER 1 [X]\t PLAYER 2 [O]\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << board[0][0] << "  |  " <<board[0][1] << "  |  " << board[0][2] << " \n";
	cout << "\t_____|_____|_____\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
	cout << "\t_____|_____|_____\n";
	cout << "\t     |     |    \n";
	cout << "\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
}

int main() 
{
	cout << "\t\t\t T I C K -- T A C -- T O E -- G A M E \t\t\t";
	cout << "\n\t\t\t\t FOR 2 PLAYERS \n\t\t\t";

	// Display the raw board
	Display_board();

	return 0;
}
