#include<iostream>
#include<cmath>
using namespace std;
double * shuzu(int** ppa,int x,int y)
{
	int count = 0;
	double* ppb = (double*)malloc(4 * x);
	for (int i = 0; i < x; i++)
	{
		count = 0;
		for (int j = 0; j < y; j++)
		{
			count += ppa[i][j];
		}
		ppb[i] = count / y;
	}
	return ppb;
}
void del(double *ppb, int x, int y)
{
	int max = ppb[0], low = ppb[0];
	for (int i = 1; i < x; i++)
	{
		if (ppb[i] > max)
		{
			max = ppb[i];
		}
	}
	for (int i = 1; i < x; i++)
	{
		if (ppb[i] < low)
		{
			low = ppb[i];
		}
	}
	for (int i = 1; i < x; i++)
	{
		if (ppb[i] ==low ||ppb[i==max])
		{
			ppb[i]=0;
		}
	}
}
int main()
{
	int x, y;
	double max = 0;
	cin >> x >> y;
	int** ppa = (int**)malloc(y * 4);
	for (int i = 0; i < x; i++)
	{
		ppa[i] = (int*)malloc(x * 4);
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> ppa[i][j];
		}
	}
	double *ppb=shuzu(ppa, x, y);
	del(ppb,x,y);
	max = ppb[0];
	for (int i = 1; i < x; i++)
	{
		if (ppb[i] > max)
		{
			max = ppb[i];
		}
	};
	free(ppa);
	free(ppb);
	printf("%.2lf", max);
	return 0;
}