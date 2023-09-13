#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void find(int arr[], int zuo, int you, int a, int mid); 
void bubble(int arr[], int sz);
int main()
{
	int arr[] = { 1,6,4,9,7,3,45,97,23,46,87,122,2,46,987,124,569};
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int zuo = 0, you = sizeof(arr) / sizeof(arr[0]) - 1, a=0;
	int mid = 0;
	bubble(arr,sz);
	find(arr,zuo, you, a, mid);
	system("pause");
	return 0;
}
void find(int arr[], int zuo, int you, int a, int mid)
{
	scanf("%d", &a);
	while (zuo <= you)
	{
		mid = (zuo + you) / 2;
		if (arr[mid] > a)
			you = mid - 1;
		else if (arr[mid] < a)
			zuo = mid + 1;
		else
			break;
	}
	if (zuo <= you)
		printf("找到了\n");
	else
		printf("找不到\n");
}
void bubble(int arr[], int sz)
{
	int jh, count = 1;
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - i-1; j++)
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