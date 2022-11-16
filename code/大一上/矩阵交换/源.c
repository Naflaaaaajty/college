#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>

int main()				 
{
	int** a,b,c,k,r,l,sum;
	char s='r';
	char m;
	scanf("%d %d", &b, &c);
	a = (int**)malloc(c * sizeof(int*));
	for (int i = 0; i < b; i++)
		a[i] = (int*)malloc(b * sizeof(int));
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
	}
	scanf("%d", &k);
	
	
	while (k)
	{
		scanf(" %c %d %d", &s, &r, &l);
		r--; l--;
		if (s == 'r')
		{
			for (int i = 0; i < c; i++)
			{
				sum = a[l][i];
				a[l][i] = a[r][i];
				a[r][i] = sum;
			}
		}
		else if (s == 'c')
		{
			for (int i = 0; i < b; i++) {
				sum = a[i][l];
				a[i][l] = a[i][r];
				a[i][r] = sum;
			}
		}
		k--;
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}