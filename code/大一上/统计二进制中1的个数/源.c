#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num1(int n)
{
    int sum = 0;
    int y, x = 1,count=0;
    while (n != 0)
    {
        y = n % 2;
        sum += x * y;
        x *= 10;
        n /= 2;
    }
    while (sum!=0)
    {
        if (sum % 10 == 1)
            count++;
        sum /= 10;
    }
    return count;
}
int main()
{
	int a,b=0;
	scanf("%d", &a);
	b=num1(a);
	printf("%d", b);
	return 0;
}