#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble(int arr[], int sz)
{
	int jh,count = 1;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				jh = arr[j];
				arr[j] = arr[j+1];
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
	int arr[] = { 10,9,6,7,8,5,4,3,2,1,11,17,15,14,16};
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	bubble(arr, sz);
	for (int i = 0; i < sz+1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}