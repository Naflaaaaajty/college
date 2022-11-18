#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int intif(long long a)
{
	int b;
	int d = a;
	b = a % 10;
	while (d > 10)
		d /= 10;
	if (d == b)
		return 0;
	while (a)
	{
		if ((a % 10) != b)
			break;
		a /= 10;
	}
	while (a)
	{
		if ((a % 10) != d)
			return 0;
		a /= 10;
	}
	return 1;
}
int main()
{
	int n = 0;
	while (scanf("%d",&n) !=0) 
	{
		long long a = 2;
		for (a = 2; 1; a*=10)
		{
			if (intif(a * n))
				break;
		}
		printf("%d: %lld\n", n, a * n);
	}
	system("pause");
	return 0;
}