#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int j(int n);
	int a;
	scanf("%d", &a);
	a=j(a);
	printf("%d", a);
	system("pause");
	return 0;
}
j(int n)				   
{
	int res=1;
	for (int i = 1; i <= n; i++)
	{
		res = res * i;
	}
	return res;
};