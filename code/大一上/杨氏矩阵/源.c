#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int** a,n=0,m=1,c=0;
	printf("请输入要边长为几的二维数组\n");
	scanf("%d", &n);
	a = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
		a[i] = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = j + m;
		}
		m++;
;
	}
	printf("请输入要查找的数字\n");
	scanf("%d", &c);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == c)
				printf("已经找到了 在数组a的%d行的%d列\n", i + 1, j + 1);
		}
	}
	system("pause");
	return 0;
}	
//int main()
//{
//	int** a, n = 0, m = 1, c = 0;
//	printf("请输入要边长为几的二维数组\n");
//	scanf("%d", &n);
//	a = (int**)malloc(n * sizeof(int*));
//	for (int i = 0; i < n; i++)
//		a[i] = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = j + m;
//		}
//		m++;
//		;
//	}
//	printf("请输入要查找的数字\n");
//	scanf("%d", &c);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == c)
//				printf("已经找到了 在数组a的%d行的%d列\n", i + 1, j + 1);
//		}
//	}
//	system("pause");
//	return 0;
//}