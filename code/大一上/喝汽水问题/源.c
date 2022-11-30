#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 20,b=0;
	while (a)
	{
		b += a;
		a /= 2;
	}
	system("pause");
	return 0;
}