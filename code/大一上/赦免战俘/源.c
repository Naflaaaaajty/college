#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<malloc.h>

int zero(int r, int j,int a,int b,int **g)
{
	for(int i=r;i<r+2;i++)

		zero();
}
int main()
{
	int a,r,j;
	int** g;
	scanf("%d", &a);
	int b = pow(2, a);
	r = b / 2-1;
	j = r;
	g = (int*)malloc(sizeof(int**) * b);
	for (int i=0; i < b; i++)
		g[i]= (int)malloc(sizeof(int*) * b);
	for (int i = 0; i < b / 2; i++)
		for (int h = 0; h < b / 2; b++)
			g[i][h] = 0;
	zero(r,j,a-1,b,g);

	system("pause");
	return 0;
}