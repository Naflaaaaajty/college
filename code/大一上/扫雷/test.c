#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//extern EASY_COUNT = 10;
int win = 0;
void game()
{
	char mine[ROWs][COLs] = { 0 };
	char show[ROWs][COLs] = { 0 };
	initboard(mine, ROWs, COLs,'0');
	initboard(show, ROWs, COLs,'*');
	setmine(mine, ROW, COL);
	displayshow(show,ROW,COL);
	findmine(mine,show, ROW, COL);
}
void menu()
{
	printf("*******************************\n");
	printf("*********   扫雷    ***********\n");
	printf("******1.play    0.exit   ******\n");
	printf("*********   扫雷    ***********\n");
	printf("*******************************\n");
}
void initboard(char board[ROWs][COLs], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void setmine(char mine[ROWs][COLs], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void displayshow(char board[ROWs][COLs], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷----------\n");
}
void findmine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col)
{
	int x = 0,y=0,X=0,Y=0,WIN = 0,input=0;
	while (win < (row * col - EASY_COUNT))
	{
		system("cls");
		//displayshow(mine, ROW, COL);
		displayshow(show, ROW, COL);
		printf("1:排查     2：标记>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了\n");
				Sleep(1000);
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Sleep(1000);
				displayshow(mine, ROW, COL);
				Sleep(3000);
				goto final;
			}
			else
			{
				find(mine,show,x, y);
				find(mine, show, x-1, y-1);
				find(mine, show, x+1, y+1);
				find(mine, show, x-1, y);
				find(mine, show, x, y-1);
				find(mine, show, x+1, y);
				find(mine, show, x, y+1);
				find(mine, show, x-1, y+1);
				find(mine, show, x+1, y-1);
				displayshow(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
			Sleep(1000);
		}
			break;
		case 2:
		printf("\n请输入要标记雷的坐标:>");
		scanf("%d %d", &X, &Y);
		if (X >= 1 && X <= row && Y >= 1 && Y <= col && (show[X][Y] == '*'))
		{
			show[X][Y] = '#';
			if (mine[X][Y] == '1')
				WIN++;
		}
		else
		{
			printf("坐标非法，重新输入\n");
			Sleep(1000);
		}
		break;
		default:
			printf("输入错误，请重新输入\n");
			Sleep(1000);
			break;
		}
		if (win == (row * col - EASY_COUNT) || WIN == EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			displayshow(mine, ROW, COL);
			Sleep(3000);
		}
	}
	if (win == (row * col - EASY_COUNT) || WIN== EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		displayshow(mine, ROW, COL);
		Sleep(3000);
	}
	final:;
	}
int get_mine_count(char mine[ROWs][COLs], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}
void find(char mine[ROWs][COLs], char show[ROWs][COLs], int x, int y)
{
	if ( x >= 1 && x <= ROW && y >= 1 && y <= COL && (show[x][y] = '*') &&(mine[x][y] != '1'))
	{
		int n = get_mine_count(mine, x, y);
		show[x][y] = n + '0';
		win++;
	}
}