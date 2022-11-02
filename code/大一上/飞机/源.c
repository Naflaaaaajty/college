#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i <= a; i++)
		{
			for (int j = 0; j < a * 2 - i * 2; j++)
				printf(" ");
			for (int k = 0; k < i + 1; k++)
				printf("*");
			printf("\n");
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < (i + 1) * 2; j++)
				printf(" ");
			for (int k = 0; k < a - i; k++)
				printf("*");
			printf("\n");

		}
	}
	return 0;
}