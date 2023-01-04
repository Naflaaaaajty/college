#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count = 0;
int fbn(int c)
{
	count++;
	int a = 1;
	if (c>=2)
	{
		return fbn(c-1)+fbn(c-2);
	}
	else
		return c;
}
int main()
{
	int a;
	int b = 0;
	scanf("%d", &a);
	b = fbn(a);
	printf("%d %d", b,count);
	system("pause");
	return 0;
}