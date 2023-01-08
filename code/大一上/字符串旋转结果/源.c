#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<malloc.h>
int if_s(char* s1, int a1, char* s2)
{
	int a2 = a1;
	while (a2)
	{
		char tmp1 = s1[0];
		a2--;
		for (int j = 1; j < a1; j++)
		{
			char tmp = s1[j];
			s1[j - 1] = tmp;
			s1[j] = s1[j - 1];
		}
		s1[a1 - 1] = tmp1;
		if (strcmp(s1, s2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char c;
	int a1, a2;
	printf("请输入你要输入多少个字符\n");
	scanf("%d", &a1);
	char *s1 = (char*)malloc(a1 * sizeof(char));
	char *s2 = (char*)malloc(a1 * sizeof(char));
	getchar();
	printf("请输入s1\n");
	scanf("%s", s1);
	printf("请输入s2\n");
	scanf("%s", s2);
	if (if_s(s1,a1, s2))
		printf("ok\n");
	else
		printf("no\n");
	system("pause");
	return 0;
}