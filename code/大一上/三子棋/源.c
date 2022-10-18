#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main()
{	
	int input = 0;
	do
	{
		system("cls");
		menu();
		printf("请输入>");
		scanf("%d", &input);
		system("cls");
		Sleep(800);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("欢迎下次来玩快滚草泥马\n");
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
void menu()
{
	printf("*******************************\n");
	printf("*********   三子棋  ***********\n");
	printf("******1.play    0.exit   ******\n");
	printf("*********   三子棋  ***********\n");
	printf("*******************************\n");
}

