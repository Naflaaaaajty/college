#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{

	double h;
	printf("«Î ‰»Î∏ﬂ∂»\n");
	scanf("%f", &h);
	h=sqrt(j(h));
	printf("%f", h);
	system("pause");
	return 0;
}
j(float H)
{
	float g = 9.8;
	H = H * 2 / g;
	return H;
}