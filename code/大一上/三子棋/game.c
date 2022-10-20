#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void game()
{
	char board[ROW][COL];
	intbord(board);
	disp(board);
	move(board);
	system("pause");
}
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
void move(char board[ROW][COL])
{
	int a = 0, b = 0,p=COL+1,c=0;
	again:
	while (1)
	{	
		system("cls");
		disp(board);
		c++;
		system("cls");
	defalult:
		disp(board);
		printf("请输入坐标(按照行 列)>\n");
		scanf("%d %d", &a, &b);
		system("cls");
		if (a >= 1 && a <= COL && b >= 1 && b <= ROW)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
 			}
			else
			{
				printf("该地方已被填写\n");
				Sleep(800);
				system("cls");
				goto defalult;
			}
		}
		else
		{
			printf("输入错误\n");
			Sleep(800);
			system("cls");
			goto defalult;
		}
		system("cls");
		disp(board);
		Sleep(1500);
		if (c >= COL)
		{
			p = boardif(board);
			if (p == 1 || p == 0 ||p==2)
				break;
		}
		system("cls");
		aimove(board);
		disp(board);
		Sleep(1500);
		system("cls");
		if (c >= COL)
		{
			p = boardif(board);
			if (p == 1 || p ==0 ||p==2)
				break;
		}
	}
	printf("游戏结束\n");
	if (p == 1)
	{
		Sleep(1500);
		system("cls");
		printf("电脑获胜\n");
	}
	else if (p ==0) 
	{
		Sleep(1500);
		system("cls");
		printf("你终于他妈赢了\n");
	}
	else if (p == 2)
	{
		Sleep(1500);
		system("cls");
		intbord(board);
		printf("平局\n");
		Sleep(1500);
		goto again;
	}
}
int boardif(char board[ROW][COL])
{
	int a = 0, b = 0, c = 0, d = 0,e=0;
	a = heng(board);
	b = shu(board);
	c = youxie(board);
	d = zuoxie(board);
	e = reopen(board);
	if (a == 1 || b == 1 || c == 1 || d == 1)
		return 1;
	if (a == 0 || b == 0 || c == 0 || d == 0)
		return 0;
	if (e == 2)
		return 2;

}
void aimove(char board[ROW][COL])
{
again:
	srand((unsigned)time(NULL));
	int random_num = rand() % COL;
	system("cls");
	printf("电脑正在输入\n");
	Sleep(1500);
	system("cls");
	srand((unsigned)time(NULL));
	int random_num2 = rand() % COL ;
	if (board[random_num][random_num2] == ' ')
	{
		board[random_num][random_num2] = '#';
	}
	else 
	{
		system("cls");
		printf("电脑正在输入\n");
		Sleep(1000);
		system("cls");
		goto again;
	}
}
int heng(char board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < COL; i++)
	{
		int j = 0;
		for (j = 0; j < ROW; j++)
		{
			if (board[i][j] != '#')
				goto again;
		}
		if (j == COL)
		{
			return 1;
			break;
		}
	again:;
    }

	int k = 0, l = 0;
	for (k= 0; k < COL;k++)
	{
		int l = 0;
		for (l = 0; l < ROW; l++)
		{
			if (board[k][l] != '*')
				goto agai;
		}
		if (l == COL) 
		{
			return 0;
			break;
		}
	agai:;
	}

}
int shu(char board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			if (board[j][i] != '*')
				break;
		}
		if (j == COL)
		{
		return 0;
		break;
		}
	}

	int k = 0, l = 0;
	for (k = 0; k < ROW; k++)
	{
		int k = 0;
		for (l = 0; l < COL; l++)
		{
			if (board[k][l] != '#')
				break;
		}
		if (l == COL)
		{
			return 1;
			break;
		}
	}

}
int youxie(char board[ROW][COL])
{
	int j = 0;
	for (j = 0; j < COL; j++)
	{
		if (board[j][j] != '*')
			break;
		if (j == COL - 1)
		{
			return 0;
			break;
		}
	}
	int i = 0;
	for (i = 0; i< COL; i++)
	{
		if (board[i][i] != '#')
			break;
		if (i == COL - 1)
		{
			return 1;
			break;
		}
	}
}
int zuoxie(char board[ROW][COL])
{
	int j = 0,i=COL-1;
	for (j = 0,i=COL-1; j < COL; j++,i--)
	{
		if (board[j][i] != '*')
			break;
		if (j == COL - 1)
		{
			return 0;
			break;
		}
	}
	int k = 0, l= COL - 1;
	for (k = 0, l = COL - 1; k < COL; k++, l--)
	{
		if (board[k][l] != '#')
			break;
		if (k == COL - 1)
		{
			return 1;
			break;
		}
	}
}
int reopen(char board[ROW][COL])
{
	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if(board[i][j] == ' ')
				goto final;
		}
	}
	return 2;
	final:;
}
