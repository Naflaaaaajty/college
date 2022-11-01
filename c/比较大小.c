#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b;
	int c = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	c=(a>b?a:b);
	printf("%d", c);
	system("pause");
	return 0;
}
