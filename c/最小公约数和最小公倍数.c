#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void j(int A,int B);
int main()
{
	int a, b;
	printf("请输入第一个数\n");
	scanf("%d", &a);
	printf("请输入第二个数\n");
	scanf("%d", &b);
	j(a, b);
	system("pause");
	return 0;
}
void j(int A,int B)
{
	int i = 1;
	int x;
	long long h;
	h = A * B;
	while (i!=0)
	{
		if (A > B)
		{
			i = A % B;
			A = B;
			B = i;
		}	
		else
		{
			i = B % A;
			B = A;
			A = i;
		}	
	}
	if (A > B)
	{
		printf("这是最小公约数%d\n", A);
		printf("这是最小公倍数%ld\n", x=h/A);
	}
	else
	{
		printf("这是最小公约数%d\n", B);
		printf("这是最小公倍数%ld\n", x = h / B);
	}
}