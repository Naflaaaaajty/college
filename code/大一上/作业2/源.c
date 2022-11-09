#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void weishu(int a)
{
	int count = 0;
	int i = 1;
	while (1)
	{
		i *= 10;
		count++;
		if (a / i == 0)
			break;
	}
	printf("位数：%d\n",count);
}
void print(int a)
{
	if (a < 10)
		printf("%d ", a);
	else
	{
		printf("%d ", a%10);
		print(a / 10);
	}
}
void print_2(int a)
{
	if (a == 0)
		return;
	print_2(a / 10);
	printf("%d ", a%10);
}
int main()
{
	printf("请输入任意数字\n");
	int a;
	scanf("%d", &a);
	weishu(a);
	print(a);
	printf("\n");
	print_2(a);
	system("pause");
	return 0;
}