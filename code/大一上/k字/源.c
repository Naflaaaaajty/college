#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF)
	{
		for (int j = 0; j <= a; j++)
		{
			for (int i = 0; i < a + 1 - j; i++)
				printf("* ");
			printf("\n");

		}
		for (int j = 0; j < a; j++)
		{
			for (int i = 0; i < j + 2; i++)
				printf("* ");
			printf("\n");

		}
	}
	return 0;
}