// Mastermind.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameMaster.h"

int main()
{
	GameMaster gm{ 10,5 };
	gm.Play();
	system("pause");
}

