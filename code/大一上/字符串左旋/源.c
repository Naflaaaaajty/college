#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a=0, k;
	char c;
	printf("请输入你要输入多少个字符\n");
	scanf("%d", &a);
	char* arr = (char*)malloc(a * sizeof(char));
	printf("请输入字符\n");
	scanf("%s", arr);
	printf("请输入你要倒转几次\n");
	scanf("%d", &k);
	while (k)
	{
		char tmp1 = arr[0];
		k--;
		for (int j = 1; j < a; j++)
		{
			char tmp = arr[j];
			arr[j - 1] = tmp;
			arr[j] = arr[j - 1];
		}
		arr[a - 1] = tmp1;
	}
	printf("%s", arr);
	system("pause");
	return 0;
}