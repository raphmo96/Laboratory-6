// Mastermind.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameMaster.h"

int main()
{
	GameMaster gm{ 10,4 };
	gm.Play();
	system("pause");
}

