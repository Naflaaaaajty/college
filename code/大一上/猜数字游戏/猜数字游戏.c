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
		printf("������µ�����>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			system("cls");
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			system("cls");
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("           �뿪ʼ��Ϸ>             ");
		scanf("\n%d", &a);
		switch (a)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			printf("�˳���Ϸ\n\n\n\n\n\n\n");
			break;
		default:
			system("cls");
			printf("��������ȷ����\n");
			break;
		}


	} while (a);
	system("pause");
	return 0;
}

