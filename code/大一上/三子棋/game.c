#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void intbord(char board[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void disp(char board[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		if (i == 0)
		{
			for (int m = 0; m < ROW; m++)
				printf("--- ");
			printf("\n");
		}
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);
			if (j != COL-1)
				printf("|");
		}
		printf("\n");
		for (int m = 0; m < ROW; m++)
			printf("--- ");
		printf("\n");
	}
}
void game()
{
	char board[ROW][COL];
	intbord(board);
	disp(board);
	system("pause");
}