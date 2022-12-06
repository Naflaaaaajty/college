#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble(int arr[], int sz)
{
	int jh, count = 1;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				jh = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = jh;
				count++;
			}
		}
		if (count == 1)
			break;
	}
}
int main()
{
	int arr[20];
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		scanf("%d", &arr[i]);
	getchar();
	scanf("%d", &arr[a]);
	bubble(arr, a);
	for (int i = a + 1; i > 0; i--)
	{
		printf("%d ", arr[20 - i]);
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int n, x, i;
//	scanf("%d\n", &n);
//	int arr[51] = { 0 };
//	for (i = 0; i < n; i++)
//		scanf("%d ", &arr[i]);
//	scanf("%d\n", &x);
//	for (i = n; i > 0; i--)  //从后往前依次与x比较
//	{
//		if (arr[i - 1] >= x)  //x更小时，元素后移一位
//			arr[i] = arr[i - 1];
//		else {
//			arr[i] = x;    //x更大时，将x插入，跳出循环
//			break;
//		}
//	}
//	if (i == 0)  arr[i] = x; //易错点，for循环中不包括i=0的情况，要单独处理
//	for (i = 0; i <= n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
