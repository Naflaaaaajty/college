#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void increase(int* a)
{
    int i = 1;
    for (int i = 1; i <= *a; i++)
    {
        printf("haha");
       
    }
    *a = i + i;
}

int main(int argc, char* argv[])
{
    int h;
    scanf("%d", &h);

    increase(&h);

    printf("%d\n", h);

    return 0;
}