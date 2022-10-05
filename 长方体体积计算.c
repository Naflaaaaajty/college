#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h,w,l,r;
	printf("请输入长方形的高\n");
	scanf("%d", &h);
	printf("请输入长方形的宽\n");
	scanf("%d",&w);
	printf("请输入长方形的长\n");
	scanf("%d",&l);
	r =h*l*w ;
	printf("这是结果：%d\n", r);
	return 0;
}