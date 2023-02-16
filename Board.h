#pragma once
class Board
{
public:
	void DisplayBoard();
	void UpdateBoard(char player, int choice);
	void SwitchTurn(char player, int row, int column);

	void SetTurn(char& player) { turn = player; }
	char GetTurn() { return turn; }

	int SetRowAndColumn(int& r, int& c) { row = r, column = c; }
	int &GetRow() { return row; }
	int &GetColumn() { return column; }

private:
	char boardArea[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
	int row, column;
	char turn;
};

