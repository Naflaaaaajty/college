#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main()
{	
	int input = 0;
	do
	{
		system("cls");
		menu();
		printf("������>");
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
			printf("��ӭ�´�������������\n");
			break;
		default:
			printf("�����������������\n");
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
	printf("*********   ������  ***********\n");
	printf("******1.play    0.exit   ******\n");
	printf("*********   ������  ***********\n");
	printf("*******************************\n");
}

