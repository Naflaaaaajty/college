#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, j,b;
    scanf("%d", &b);
    for (i = 1; i <= b; i++) 
    {
        for (j = 1; j <= b; j++)
        printf("%2d*%2d=%-4d", i, j, i * j);
        printf("\n");
    }
	system("pause");
	return 0;
}