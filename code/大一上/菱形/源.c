#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 1; i <= a + 1; i++)
		{
			for (int j = i; j < a + 1; j++)
				printf(" ");
			for (int b = 0; b < i; b++)
				printf("* ");
			printf("\n");

		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i + 1; j++)
				printf(" ");
			for (int k = 0; k < a - i; k++)
				printf("* ");
			printf("\n");

		}

	}
	return 0;
}