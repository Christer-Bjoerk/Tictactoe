#include <iostream>
#include <stdlib.h>

using namespace std;

char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int choice;
int row, column;
char turn = 'X';
bool draw = false;

void display_board()
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

void player_turn()
{
	if (turn == 'X')
	{
		cout << "\n Player 1 [X] turn : ";
	}
	else if (turn == 'O')
	{
		cout << "\n Player 2 [O] turn : ";
	}

	cin >> choice;

	switch (choice)
	{
	case 1: row = 0; column = 0; break;
	case 2: row = 0; column = 1; break;
	case 3: row = 0; column = 2; break;
	case 4: row = 1; column = 0; break;
	case 5: row = 1; column = 1; break;
	case 6: row = 1; column = 2; break;
	case 7: row = 2; column = 0; break;
	case 8: row = 2; column = 1; break;
	case 9: row = 2; column = 2; break;
	default:
		cout << "Invalid move";
		break;
	}

	if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
		board[row][column] = 'X';
		turn = 'O';
	}
	else if (turn == 'O' && board[row][column] != 'O' && board[row][column] != 'X')
	{
		board[row][column] = 'O';
		turn = 'X';
	}
	else
	{
		cout << "Box already filled!\n Please choose another!! \n";
		player_turn();
	}

	display_board();

};

int main() 
{
	display_board();
	return 0;
}
