#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char arr[100] = { 0 };
    int i = 0, b = 0;
    while ((arr[i] = getchar()) != '\n')
        i++;
    while (i >= 0)
    {
        b = i;
        for (i--; i >= 0; i--)
            if (arr[i] == ' ')
                break;
        for (int j = i + 1; j < b; j++)
            printf("%c", arr[j]);
        if (i >= 0)
            printf(" ");
    }
}