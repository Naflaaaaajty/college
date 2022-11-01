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
//int j();
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d", &a);
//	b=j(a);
//	printf("%d", b);
//	return 0;
//}
//int j(int a)
//{
//
//	if (a <= 10)
//		return a;
//	else
//		return a%10+j(a / 10);
//
//}
//int main()
//{
//	int j = 6, i = 4;
//	j = ++i;
//	j = i++;
//	return 0;
//int main()
//{
//	char ch[]={0};
//	int i = 0;
//	scanf("%s", ch);
//	for (i = 0; ch[i] != '\0'; i++);
//	printf("%d",i);
//	system("pause");
//	return 0;
//}
//int Strlen( char* ch)
//{
//	if (*ch == '\0')
//		return 0;
//	else
//		return 1 + Strlen(ch+1);
//}
//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", ch);
//	int a = Strlen(ch);
//	printf("%d", a);
//	return 0;
//}




//size_t my_strlen(const char* str) {
//    if (*str != '\0') {
//        return 1 + my_strlen(str + 1);
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("len = %d\n", len);
//
//    return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	
//		if (year % 4 == 0)  
//		{
//			if (year % 100 != 0) 
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0) 
//		{
//			printf("%d ", year);
//		}
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//void print(int a)
//{
//	if (a != 0)
//	{
//		printf("%d ", a % 10);
//		a /= 10;
//		print(a);
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
