#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
void bubble(int a[],int sz)
{
	int count = 1, sum;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				sum = a[j];
				a[j] = a[j + 1];
				a[j + 1] = sum;
				count++;
			}
		}
		if (count == 1)
			break;
	}
}
int main()
{
	int *c,d,e;
	scanf("%d %d", &d, &e);
	c = (int*)malloc((d+e) * sizeof(int*));
	for (int i = 0; i < d; i++)
	{
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < e; i++)
	{
		scanf("%d", &c[i+d]);
	}

	bubble(c,d+e-1);
	for (int i = 0; i < d + e; i++)
	{
		printf("%d ", c[i]);
	}
	system("pause");
	return 0;
}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //输入n和m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //输入两个升序序列
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并有序序列并输出
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    //判断尚未遍历完的数组是否需要打印输出
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//
