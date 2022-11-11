#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int win = 0;
char** mine = '0';
char** show='0';
void game()
{
	mine = (char**)malloc(ROWs * sizeof(char*));
	for (int i = 0; i < ROWs; i++)
		mine[i] = (char*)malloc(ROWs * sizeof(char));
	show = (char**)malloc(ROWs * sizeof(char*));
	for (int i = 0; i < ROWs; i++)
		show[i] = (char*)malloc(ROWs * sizeof(char));
	initboardshow(ROWs, COLs,'*');
	initboardmine(ROWs, COLs,'0');
	setmine(ROW, COL);
	displayshow(ROW,COL);
	findmine(ROW, COL);
}
void menu()
{
	printf("*******************************\n");
	printf("*********   扫雷    ***********\n");
	printf("******1.play    0.exit   ******\n");
	printf("*********   扫雷    ***********\n");
	printf("*******************************\n");
}
void initboardshow( int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			show[i][j] = set;
		}
	}
}
void initboardmine( int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}
void setmine(int row, int col)
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
void displayshow(int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%2d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", show[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷----------\n");
}
void displaymine(int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%2d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷----------\n");
}
void findmine(int row, int col)
{
	int x = 0,y=0,X=0,Y=0,WIN = 0,input=0;
	while (win < (row * col - EASY_COUNT) && WIN != EASY_COUNT)
	{
		system("cls");
		displayshow( ROW, COL);
		//displaymine(ROW, COL);
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
				displaymine(ROW, COL);
				Sleep(3000);
				goto final;
			}
			else
			{
				find(x, y);
				system("cls");
				displayshow(ROW, COL);
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
	}
	if (win == (row * col - EASY_COUNT) || WIN== EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		displaymine(ROW, COL);
		Sleep(3000);
	}
	final:;
	}
int get_mine_count(int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
	  return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
	}
}
void find(int x, int y)
{
	if ( x >= 1 && x <= ROW && y >= 1 && y <= COL )
	{
		int n = get_mine_count(x, y);
		show[x][y] = n + '0';
		win++;
		if(show[x+1][y+1]=='*'&& mine[x+1][y+1] !='1')
			find(x + 1, y + 1);
		if (get_mine_count(x - 1, y - 1) == 0 && show[x - 1][y - 1] == '*' && mine[x - 1][y -1] != '1')
			find( x - 1, y - 1);		
		if (get_mine_count(x + 1, y) == 0 && show[x + 1][y ] == '*' && mine[x + 1][y ] != '1')
			find( x + 1, y );
		if (get_mine_count(x, y + 1) == 0 && show[x][y + 1] == '*' && mine[x][y + 1] != '1')
			find( x, y + 1);		
		if (get_mine_count(x - 1, y) == 0 && show[x - 1][y ] == '*' && mine[x -1][y ] != '1')
			find( x - 1, y);
		if (get_mine_count(x, y - 1) == 0 && show[x ][y -1] == '*' && mine[x][y-1] != '1')
			find(x , y - 1);
		if (get_mine_count(x + 1, y - 1) == 0 && show[x + 1][y - 1] == '*' && mine[x + 1][y - 1] != '1')
			find( x+1, y - 1);
		if (get_mine_count(x - 1, y + 1) == 0 && show[x - 1][y + 1] == '*' && mine[x - 1][y + 1] != '1')
			find( x - 1, y + 1);
	}
}