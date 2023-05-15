#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool iszhishu(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (iszhishu(a))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}