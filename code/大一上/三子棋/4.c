#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > c)
	{
		if (c > b)		
			printf("%d %d %d", a, c, b);
		else
			printf("%d %d %d", a, b, c);

	}
	else
	{
		if (a > b)
			printf("%d %d %d", c, a, b);
		else
			printf("%d %d %d", c, b, a);

	}
	if (b>c>a)
		printf("%d %d %d", b, c, a);
	if(b>a>c)
		printf("%d %d %d", b, a, c);
	return 0;
}