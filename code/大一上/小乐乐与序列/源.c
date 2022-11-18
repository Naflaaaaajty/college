#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
void quchong(int* a, int b)
{
	int sum = a[0];
	for (int i = 0; i < b; i++)
	{
		if (sum != a[i + 1])
			sum = a[i + 1];
		else
			a[i + 1] = {};
	}
}
int main()
{
	int* a, b;
	scanf("%d", &b);
	a = (int*)malloc(b * sizeof(int));
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &a[i]);
	}
	quchong(a, b);
	system("pause");
	return 0;
}