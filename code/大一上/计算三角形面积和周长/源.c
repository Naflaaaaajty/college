#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, e, p;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        d = a + b + c;
        p = d / 2;
        e = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2f area=%.2f", d, e);
    }
    return 0;
}
