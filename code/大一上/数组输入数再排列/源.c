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
//	for (i = n; i > 0; i--)  //�Ӻ���ǰ������x�Ƚ�
//	{
//		if (arr[i - 1] >= x)  //x��Сʱ��Ԫ�غ���һλ
//			arr[i] = arr[i - 1];
//		else {
//			arr[i] = x;    //x����ʱ����x���룬����ѭ��
//			break;
//		}
//	}
//	if (i == 0)  arr[i] = x; //�״�㣬forѭ���в�����i=0�������Ҫ��������
//	for (i = 0; i <= n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
