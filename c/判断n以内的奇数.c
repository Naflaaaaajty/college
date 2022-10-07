#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int b = 1; b <= a; b++)
	{
		if (0 != b % 2)
			printf("%d\n", b);
	}
	system("pause");
	return 0;
}