#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int* a, int sz)
{
	for ( int i = 0; i <sz; i++)
	{
		printf("%d ", *(a + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	system("pause");
	return 0;
}