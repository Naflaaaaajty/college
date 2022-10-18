#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digui(int c)
{
	if (c <= 1)
		return 1;
	else
		return c* digui(c - 1);
}
int main()
{
	int a;
	scanf("%d", &a);
	int b = digui(a);
	printf("%d\n", b);
	system("pause");
	return 0;
}