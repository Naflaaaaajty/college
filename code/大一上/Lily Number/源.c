#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define f 10000
#define g 1000
#define h 100
#define j 10
int main()
{
	long a=1000;
	for (a = 1; a < 100000; a++)
	{
		long b, c, d, e;
		b = (a / f) * (a % f);
		c = (a / g) * (a % g);
		d = (a / h) * (a % h);
		e = (a / j) * (a % j);
		if (b + c + d + e == a)
			printf("%ld ", a);
	}
	system("pause");
	return 0;
}