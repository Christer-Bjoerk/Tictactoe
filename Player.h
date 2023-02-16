#pragma once
class Player
{
public:
	void PlayerTurn();
	void SetTurn(char& player) { turn = player; }

	int SetChoice(int& value) { return choice = value; };
	int GetChoice() { return choice; };

	char GetPlayerTurn() { return turn; };
private:
	char turn;
	int choice;
};

