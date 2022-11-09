#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int nine(int a)
{
	if (a < 10)
		if (a == 9)
			return 1;
		else
			if (a % 10 == 9)
				return 1;
}
int main()
{
	int j = 0;
	for (int i = 1; i <= 2019; i++)
	{
		j = j + nine(i);
	}
	system("pause");
	return 0;
}