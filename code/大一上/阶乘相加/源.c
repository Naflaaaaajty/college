#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void j(int* n);
int main()
{
	int a;
	scanf("%d", &a);
	j(&a);
	printf("%d", a);
	system("pause");
	return 0;
}
void j(int* n)
{
	int res = 1,k=0;
	int v = *n;
	for (int h = 1; h <= v; *n = *n - 1)
	{
		for (int i = 1; i <= *n; i++)
		{
			res = res * i;
		}
		k = res + k;
	}
	*n = k;
}
