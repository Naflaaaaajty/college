#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int arr1[10] = { 1,2,3 };
	int arr2[] = { 1,2,3,4 };
	int arr3[5] = { 1,2,3,4,5 };
    char arr4[10] = { 'a',98, 'c'};
	char arr5[] = { 'a','b','c' };
	char arr6[] = "abcdef";
	//printf("%d", (int)strlen(arr4));
	printf("%d",sizeof(arr2)/sizeof(arr2[0]));
	system("pause");
	return 0;
}