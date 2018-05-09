#pragma once
class GameMaster
{
	std::string** grid;
	int size[2];
	char maxColors[8]{ 'Y','B','P','O','G','R','C','T' };
	char* colors;
	char* masterKey;
	char* userKey;
	int rounds;

	void Instructions();
	void CreateGrid(const int&, const int&);
	void DrawGrid();
	void UpdateGrid();
	char* AskUserInput();
	std::string PrintColor(char*&);
	bool CheckWin();
	void CreateKey();
	void GameState(bool&);
	char* RemoveChar(char*&, int&, int&);
	std::uniform_int_distribution<> *dice;
	std::map<char, std::string> dictionnary = { {'Y',"Yellow"},{ 'B',"Blue" },{ 'P',"Purple" },{ 'O',"Orange" },{ 'G',"Green" },{ 'R',"Red" },{ 'C',"Cyan" },{ 'T',"Turquoise" } };
public:
	GameMaster(int, int);
	void Play();
	~GameMaster();
};

