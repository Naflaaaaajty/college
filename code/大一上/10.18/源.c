#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	float dis;
	char sex[20];
	printf("请以年龄 身高 性别以空格分开分别输入\n");
	scanf("%d %f %s",&age,&dis,&sex);
	age++;
	printf("%d %.1f %s\n", age,dis,sex);
	system("pause");
	return 0;
}																							