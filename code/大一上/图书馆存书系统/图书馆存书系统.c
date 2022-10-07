#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct book
{
	char name[20];
	char author[20];
	int price;
};
int main()
{
    int a;
	int b = 1;
	printf("图书馆存书系统\n");
	printf("请输入你要存多少本书\n");
	scanf("%d", &a);
	printf("%d", a);
	while (b<=a)
	{


	}
	system("pause");
	return 0;
}