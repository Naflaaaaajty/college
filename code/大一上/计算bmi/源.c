#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    if (a >= 50 && a <= 180 && b >= 50 && b <= 180)
    {
        printf("%.2f", a / ((b / 100) * (b / 100)));
    }
    return 0;
}