#define _CRT_SECURE_NO_WARNINGS	 1
#include<stdio.h>
struct book
{
	char name[20];
	short price;
	char authour[20];
};
int main()
{
	struct book b = { "cpp",4000,"jty" };
	printf("%s,%d,%s", b.name, b.price, b.authour);
	system("pause");
	return 0;
}