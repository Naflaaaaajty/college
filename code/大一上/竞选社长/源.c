#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a;
    int c = 0, d = 0;
    while ((a = getchar()) != '0')
    {
        if (a == 'A')
            c++;
        else
            d++;
    }
    if (c > d)
        printf("A");
    else if (c < d)
        printf("B");
    else
        printf("E");
    return 0;
	system("pause");
	return 0;
}