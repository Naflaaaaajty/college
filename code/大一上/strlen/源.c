#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* n)
{
	if (*n != '\0')
		return 1 + my_strlen(n + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "jty";
	int a=my_strlen(arr);
	printf("%d", a);
	system("pause");
	return 0;
}