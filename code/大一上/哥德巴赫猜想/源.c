#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void g(even);

int main()
{
	int even = 0;
	do
	{
		printf("请输入大于6的偶数>\n");
		scanf("%d", &even);
		if (even % 2 != 0 || even < 6)
			printf("wrong");
		else
			break;

	} while (1);
	g(even);
	system("pause");
	return 0;
}
void g(int e)
{
	int a=0, b;
	
	for (a = 3; a < e / 2; a += 2)
	{
		int p = 1;
		for (int i = 3; i < a; i+=2)
		{
			if (a % i == 0)
				p = 0;
		}
		while (p)
		{
			b = e - a;
			int i = 3;
			for (i = 3; i < b; i++)
			{
				if (b % i == 0)
					goto h;
			}
			if(i==b)
				printf("%d=%d+%d\n", e, a, b);
			goto f;
		}
	h:;
	}
	 f:;
}
