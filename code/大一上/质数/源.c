#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int h=0,s;
    scanf("%d", &s);
    for (int i = 1; i <= s; i++)
    {
        for (int b = 1; b <= i; b++)
        {
            if (i != b && 0 == i % b && b!=1)
            {
                break;
            }
            else if(i==b)
            {
                printf("%d ", i);
                h++;
                break;
            }
        }
    }
    printf("%d¸ö ", h);
    return 0;
}