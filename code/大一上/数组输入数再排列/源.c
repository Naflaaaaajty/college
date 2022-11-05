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
	{
		scanf("%d", &arr[i]);
	}
	getchar();
	scanf("%d", &arr[a]);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	bubble(arr, sz);
	for (int i = a + 1; i > 0; i--)
	{
		printf("%d ", arr[20 - i]);
	}
	return 0;
}  