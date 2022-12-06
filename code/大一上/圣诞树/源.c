#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,count=2,count1=2,count3=2;
	scanf("%d", &a);
	int b = (a * 5 + a - 2)/2;
	for (int i = 0; i < a * 3; i++)
	{
		for (int j = 0; j < b - i; j++)
			printf(" ");
		if (i < 3)
		{
			for (int l = 0; l < i + 1; l++)
				printf("* ");
			printf("\n");
		}
		if (i >=3)
		{
			if ((i+1) % 3 == 1)
			{
				for (int m = 0; m < count; m++)
					printf("*     ");
				printf("\n");
				count++;
			}
			if ((i + 1) % 3 == 2)
			{
				for (int m = 0; m < count1; m++)
					printf("* *   ");
				printf("\n");
				count1++;
			}
			if ((i + 1) % 3 == 0)
			{
				for (int m = 0; m < count3; m++)
					printf("* * * ");
				printf("\n");
				count3++;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			printf(" ");
		printf("*");
		printf("\n");

	}
	system("pause");
	return 0;
}