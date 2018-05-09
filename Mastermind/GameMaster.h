#pragma once
class GameMaster
{
	std::string** grid;
	int size[2];
	char maxColors[8]{ 'Y','B','P','O','G','R','C','T' };
	char* colors;
	char* masterKey;
	int rounds;

	void Instructions();
	void CreateGrid(const int&, const int&);
	void DrawGrid();
	void UpdateGrid(char*);
	char* AskUserInput();
	std::string PrintColor(char*);

	std::map<char, std::string> dictionnary = { {'Y',"Yellow"},{ 'B',"Blue" },{ 'P',"Purple" },{ 'O',"Orange" },{ 'G',"Green" },{ 'R',"Red" },{ 'C',"Cyan" },{ 'T',"Turquoise" } };
public:
	GameMaster(int, int);
	void Play();
	~GameMaster();
};

