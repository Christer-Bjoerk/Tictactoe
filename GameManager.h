#pragma once
class GameManager
{
public:
	void UpdateGameProgress(char& turn, int& row, int& column);
	void DisplayWinner();
	bool GameOver();

private:
	char boardArea[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
	int playedTurns = 0;
	bool draw;
	char currentTurn;
};

