#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    for (int b = 1; b < 6; b++)
    {
        for (int c = 5 - b; c > 0; c--)
        {
            printf(" ");
        }
        for (int d = 1; d <= b; d++)
        {
            printf("%c ", a);

        }
        printf("\n");
    }
	system("pause");
	return 0;
}