#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr[] = { 'w','e','l','l','c','o','m','e',' ','t','o',' ','b','i','t','!','!','!' };
	char brr[] = { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };
	int a;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int c = 0; c < sz; c++)
	{
		printf("%c", brr[c]);
		Sleep(50);
	}
	printf("\n");
	for (int i = 0,b=sz-1; i<=b ; i++,b--)
	{
		brr[i] = arr[i];
		brr[b] = arr[b];
		for (int c = 0; c < sz; c++)
		{
			printf("%c", brr[c]);
			Sleep(50);
		}
		Sleep(50);
		printf("\n");
	}
	system("cls");
	for (int c = 0; c < sz; c++)
	{
		printf("%c", brr[c]);
	}
	system("pause");															 
	return 0;
}