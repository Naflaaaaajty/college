#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void j(int* n);
int main()
{
	long a;
	scanf("%ld", &a);
	j(&a);
	printf("%ld", a);
	system("pause");
	return 0;
}
void j(int* n)
{
	long res = 1,RES=0;
	for (int i = 1; i <= *n; i++)
	{
		res = res * i;
		RES = res + RES;
	}
	*n = RES;
}
