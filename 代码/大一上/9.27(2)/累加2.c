#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void j(int n);
int main()
{
	int n;
	printf("\n");
	scanf("%d", &n);
	j(n);
	return 0;
}
void j(int n)
{
	int a;
	a = 1 + n;
	a *= n;
	a /= 2;
	printf("%d", a);
}