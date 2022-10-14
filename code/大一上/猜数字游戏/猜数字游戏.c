#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			system("cls");
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			system("cls");
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			Sleep(2000);
			system("cls");
			break;
		}
	}
}
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("**********************************\n");
}
int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("           请开始游戏>             ");
		scanf("\n%d", &a);
		switch (a)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			printf("退出游戏\n\n\n\n\n\n\n");
			break;
		default:
			system("cls");
			printf("请输入正确数字\n");
			break;
		}


	} while (a);
	system("pause");
	return 0;
}

