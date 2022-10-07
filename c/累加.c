#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int sum = 0;
	printf("\n");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}