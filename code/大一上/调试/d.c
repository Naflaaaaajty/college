#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	float a=0.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		a += (pow(-1, i + 1) / i) ;
//	}
//	printf("%f", a);
//	system("pause");
//	return 0;
//
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
//int main()
//{
//	char arr[20];
//	scanf("%s", arr);
//	puts(arr);
//	return 0;
//}
//int jia(int a);
//int main() {
//    int a, b = 0;
//    scanf("%d", &a);
//    b = jia(a);
//    printf("%d", b);
//    return 0;
//}
//int jia(int b)
//{
//    if (b == 1)
//        return 1;
//    else
//        return b + jia(b - 1);
//}
//void swap(int* a, int* b);
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//}
//void swap(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int year(int i);
//int main()
//{
//	int i = 0, c = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	//printf("\n%d", c);
//	system("pause");
//	return 0;
//}
//int year(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j > sqrt(i))
//	{
//		return 1;
//	}
//}
//int j = 0;
//for (j = 2; j <= sqrt(i); j++)
//{
//	if (i % j == 0)
//	{
//		break;
//	}
//}
//if (j > sqrt(i))
//{
//	c++;
//	printf("%d ", i);
//}
//int year(int i)
//{
//	return ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0);
//}
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (year(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int POW(int a,int b)
//{
//	if (b ==1)
//		return a;
//	else
//		return a * pow(a, b - 1);
//}
//int main()
//{
//	int a=0 ,b=0,c=0;
//	scanf("%d %d", &a,&b);
//	c = POW(a, b);
//	printf("%d", c);
//	return 0;
//}
int j();
int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	b=j(a);
	printf("%d", b);
	return 0;
}
int j(int a)
{

	if (a <= 10)
		return a;
	else
		return a%10+j(a / 10);

}
