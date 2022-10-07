#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    if (a < 100000000 && a>0)
    {
        c = a;
        b = a;
        printf("%d ", a = a / 3600);
        printf("%d ", b = b % 3600 / 60);
        printf("%d ", c = c - a * 3600 - b * 60);
    }
    return 0;
}