#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int zuo= 0, you = sizeof(arr) / sizeof(arr[0])-1, a;
	int mid=0;
	scanf("%d", &a);
	while (zuo <= you)
	{
		mid = (zuo + you) / 2;
		if (arr[mid] > a)
		{
			you = mid - 1;
		}
		else if (arr[mid] < a)
		{
			zuo = mid + 1;
		}
		else
			break;
	}
	if (zuo <= you)
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
	}
	//int b = sz-1, c = 0;
	//for (i = 0; arr[i] != a; i = (b + c) / 2)
	//{
	//	if (i == sz - 2)
	//	{
	//		printf("no");
	//		goto again;
	//	}
	//	if (arr[i] < a)
	//	{
	//		c = i;
	//		continue;
	//	}
	//	else if (arr[i] > a)
	//	{
	//		b = i;
	//		continue;
	//	}
	//}
	//printf("ok");
	////again:
	//system("pause");
	//return 0;
//}