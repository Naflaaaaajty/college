#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int dgxj(int c)
{
	if (c == 1)
		return 1;
	else
	{
	    return c*dgxj(c-1);
	}
}
int main()
{
	int a,b=0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		b += dgxj(i);
	}
	printf("%d", b);
	system("pause");
	return 0;
}