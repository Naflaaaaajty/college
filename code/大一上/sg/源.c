#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 101; i <= 999; i += 2) //所有的偶数都不是质数所有用i+=2得到所有的奇数
    {
        int j = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0 && j != i)
                break;
            else if (i % j == 0 && i == j)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}