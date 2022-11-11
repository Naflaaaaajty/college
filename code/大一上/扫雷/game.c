#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int EASY_COUNT = 0;
int	ROW=0;
int	COL=0;
int	ROWs=0;
int	COLs=0;
int main()
{	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		system("cls");
		menu();
		printf("请输入>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			system("cls");
			printf("请输入雷的个数>\n");
			scanf("%d", &EASY_COUNT);
			printf("请输入你想玩多大的正方形>\n");
			scanf("%d", &ROW);
			COL = ROW;
			ROWs = ROW + 2;
			COLs = ROW + 2;
			game();
			break;
		case 0:
			printf("欢迎下次来玩\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			Sleep(1000);
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
