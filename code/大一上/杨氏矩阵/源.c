#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int** a,n=0,m=1,c=0;
	printf("������Ҫ�߳�Ϊ���Ķ�ά����\n");
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
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &c);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == c)
				printf("�Ѿ��ҵ��� ������a��%d�е�%d��\n", i + 1, j + 1);
		}
	}
	system("pause");
	return 0;
}	
//int main()
//{
//	int** a, n = 0, m = 1, c = 0;
//	printf("������Ҫ�߳�Ϊ���Ķ�ά����\n");
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
//	printf("������Ҫ���ҵ�����\n");
//	scanf("%d", &c);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == c)
//				printf("�Ѿ��ҵ��� ������a��%d�е�%d��\n", i + 1, j + 1);
//		}
//	}
//	system("pause");
//	return 0;
//}