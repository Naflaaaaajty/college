#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0, sz = sizeof(arr) / sizeof(arr[0]), a;
	scanf("%d", &a);
	int b = sz-1, c = 0;
	for (i = 0; arr[i] != a; i = (b + c) / 2)
	{
		if (i == sz - 2)
		{
			printf("no");
			break;
		}
		if (arr[i] < a)
		{
			c = i;
			continue;
		}
		else if (arr[i] > a)
		{
			b = i;
			continue;
		}
	}
	if (arr[i] == a)
		printf("ok");
	system("pause");
	return 0;
}