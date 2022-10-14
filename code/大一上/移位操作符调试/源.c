#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", 2 << (n - 1));
    return 0;
}