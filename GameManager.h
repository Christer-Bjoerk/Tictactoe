#pragma once
class GameManager
{
public:
	void UpdateBoard(char& turn, int& row, int& column);
	bool GameOver();

private:
	char boardArea[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
};

