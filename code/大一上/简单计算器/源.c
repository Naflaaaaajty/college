#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a, b;
	char c;
	while (scanf("%lf %c %lf", &a, &c, &b) != EOF)
	{
		if (c != '+' && c != '-' && c != '*' && c != '/')
		{
			printf("Invalid operation!");
			break;
		}
		if (c == '+')
			printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
		if (c == '-')
			printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
		if (c == '*')
			printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
		if (c == '/')
		{
			if (b == 0)
				printf("Wrong!Division by zero!");
			else
				printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
		}
	}
	system("pause");
	return 0;
}