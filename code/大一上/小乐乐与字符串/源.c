#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arrr[100] = { 0 };
	scanf("%s", arrr);
	char* arr = arrr;
	int c = 0, h = 0, chn = 0;
	while (*arr)
	{
		if (*arr == 'C')
			c++;
		if (*arr == 'H')
			h += c;
		if (*arr == 'N')
			chn += h;
		*arr++;
	}
	printf("%lld", chn);
	return 0;
}