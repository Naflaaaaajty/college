#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char mima,ch;
	char MIMA= 'y';
	while ((mima = getchar()) != MIMA)
	{
		printf("����\n");
		while ((ch = getchar()) != '\n');

	}
	printf("��ͷ\n");
	system("pause");
	return 0;
}