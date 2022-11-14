#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary(int n)
{
    int sum = 0;
    int y, x = 1, count = 0;
    while (n != 0)
    {
        y = n % 2;
        sum += x * y;
        x *= 10;
        n /= 2;
    }
    while (sum != 0)
    {
        if (sum % 10 == 0)
            count++;
        sum /= 10;
    }
    return count;
}
int main()
{
	int a, b;
	scanf("%d %d", &a,&b);
	a = a & b;
    a = binary(a);
    printf("%d ", a);
	return 0;
}