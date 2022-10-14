#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4145,5,6,7,8,9,10,13,25,78 };
	int max = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		if (max <= arr[i])
			max = arr[i];

	}
	printf("%d", max);

	system("pause");
	return 0;
}