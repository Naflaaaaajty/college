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
		printf("������>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			system("cls");
			printf("�������׵ĸ���>\n");
			scanf("%d", &EASY_COUNT);
			printf("���������������������>\n");
			scanf("%d", &ROW);
			COL = ROW;
			ROWs = ROW + 2;
			COLs = ROW + 2;
			game();
			break;
		case 0:
			printf("��ӭ�´�����\n");
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
