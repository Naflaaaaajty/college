#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[100] = { 0 };
	int i = 0;
	while ((arr[i] = getchar()) != '\n')
		i++;
	i--;
	for (; i >= 0; i--)
		printf("%c", arr[i]);

	system("pause");
	return 0;
}										   