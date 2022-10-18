#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int b)
{
	if (b > 9)
		print(b / 10);
	printf("%d\n", b % 10);
}
int main()
{
	int a;
	scanf("%d", &a);
	print(a);
	system("pause");
	return 0;
}