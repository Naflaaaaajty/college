#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, result;
	scanf("%x %o", &a, &b);
	result = a + b;
	printf("%d", result);
	system("pause");
	return 0;
}