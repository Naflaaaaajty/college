#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    double b;
    scanf("%f", &a);
    if (a > 0 && a < 15)
    {
        a = pow(a, 3);
        b = a * 4 / 3 * 3.1415926;
        printf("%.3f", b);
    }
    return 0;
}