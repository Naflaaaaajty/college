#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void j(int A,int B);
int main()
{
	int a, b;
	printf("�������һ����\n");
	scanf("%d", &a);
	printf("������ڶ�����\n");
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
		printf("������С��Լ��%d\n", A);
		printf("������С������%ld\n", x=h/A);
	}
	else
	{
		printf("������С��Լ��%d\n", B);
		printf("������С������%ld\n", x = h / B);
	}
}