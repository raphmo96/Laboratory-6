#pragma once
class GameMaster
{
	std::string*** grid;
	int size[2];
	void Instructions();
	void CreateGrid(const int&, const int&);
	void GameState();
public:
	GameMaster(int, int);
	void Play();
	~GameMaster();
};

