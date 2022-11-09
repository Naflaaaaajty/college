#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int main()
{
	float q, w;
	while (scanf("%f %f", &q, &w) != EOF)
	{
		float count = 0;
		int** a = (int**)malloc(w * sizeof(int*));
		for (int i = 0; i < q; i++)
			a[i] = (int*)malloc(q * sizeof(int*));
		int** s = (int**)malloc(w * sizeof(int*));
		for (int i = 0; i < q; i++)
			s[i] = (int*)malloc(q * sizeof(int*));
		for (int i = 0; i < q; i++)
		{
			for (int j = 0; j < w; j++)
				scanf("%d", &a[i][j]);
		}
		for (int i = 0; i < q; i++)
		{
			for (int j = 0; j < w; j++)
				scanf("%d", &s[i][j]);
		}
		for (int i = 0; i < q; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (a[i][j] == s[i][j])
					count++;
			}
		}
		printf("%.2f", count / (q * w)*100);
	}
	system("pause");
	return 0;
}