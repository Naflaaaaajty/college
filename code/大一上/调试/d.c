#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#include <stdlib.h>

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
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 1; i <= a; i++)
//		{
//			for (int j = i; j < a; j++)
//				printf(" ");
//			for (int b = 0; b < i; b++)
//				printf("* ");
//			printf("\n");
//		}
//		
//
//	}
//	return 0;
// }
//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    //多组输入
//    while (~scanf(" %d", &n))
//    {
//        //控制行数
//        for (int i = 0; i < n; i++)
//        {
//            //打印一行
//            //打印空格
//            for (int j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            //打印*空格
//            for (int k = 0; k <= i; k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			for(int j=0;j<i;j++)
//				printf(" ");
//			for(int k=0;k<a-i;k++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 1; i <= a+1; i++)
//		{
//			for (int j = i; j < a+1; j++)
//				printf(" ");
//			for (int b = 0; b < i; b++)
//				printf("* ");
//			printf("\n");
//
//		}
//		for (int i = 0; i < a; i++)
//			{
//				for(int j=0;j<i+1;j++)
//					printf(" ");
//				for(int k=0;k<a-i;k++)
//					printf("* ");
//				printf("\n");
//			}
//	}
//	return 0;	
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int j = 0; j <= a; j++)
//		{
//			for (int i = 0; i<a+1-j; i++)
//				printf("* ");
//			printf("\n");
//
//		}
//		for (int j = 0; j < a; j++)
//		{
//			for(int i=0;i<j+2;i++)
//				printf("* ");
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i <= a; i++)
//		{
//			for (int j = 0; j < a * 2 - i*2; j++)
//				printf(" ");
//			for (int k = 0; k < i + 1; k++)
//				printf("*");
//			printf("\n");
//		}
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < (i+1)*2; j++)
//				printf(" ");
//			for (int k = 0; k < a-i; k++)
//				printf("*");
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			for
//	   }
//	}
//	return 0;
//}
//int fib(int a)
//{
//	int c = 0, b = 1,d=1,e=1;
//	for (d = 0; d < a; d++)
//	{
//		e = c + b;
//		c = b;
//		b = e;
//	}
//	return e;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d", &a);
//	b=fib(a);
//	printf("%d", b);
//	return 0;
//}
//char reverse_string(const char* string)
//{
//	if (*string == '\0')
//		return ;
//	reverse_string(string + 1);
//	printf("%c", *string);
//
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	reverse_string(arr);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//		printf("* ");
//	printf("\n");
//	for (int i=0; i < a - 2; i++)
//	{
//		printf("* ");
//		for(int j=0;j<a-2;j++)
//			printf("  ");
//		printf("* ");
//		printf("\n");
//
//	}
//	for (int i = 0; i < a; i++)
//		printf("* ");
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("*\n* *\n");
//	for (int i = 1; i < a-2; i++)
//	{
//		printf("* ");
//		for(int j=0;j<i;j++)
//			printf("  ");
//		printf("*");
//		printf("\n");
//
//	}
//	for (int i = 0; i < a; i++)
//	{
//		printf("* ");
//
//	}
//	return 0;
//}
//void bubble(int arr[], int sz)
//{
//	int jh, count = 1;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				jh = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = jh;
//				count++;
//			}
//		}
//		if (count == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[20];
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	getchar();
//	scanf("%d", &arr[a]);
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	bubble(arr, sz);
//	for (int i = a+1; i>0; i--)
//	{
//		printf("%d ", arr[20-i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[20] = "abcd";
//	int t = sizeof(arr) / sizeof(arr[0]);
//	int b = strlen(arr);
//	return 0;
//}
//void change(int *a, int *b)
//{
//	int tmp=0;
//	for (int i=0; i < 5; i++)
//	{
//		tmp = *(a + i);
//		*(a+i) = *(b+i);
//		*(b + i) = tmp;
//		//a + 1;
//		//b + 1;
//	}
//}
//int main()
//{
//	int arr[5], brr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &brr[i]);
//		
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}	
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	change(arr, brr);
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}	
//	printf("\n");
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	return 0;
//}
//init(int* a)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		*(a+1) = 0;
//	}
//}
//reverse(int* a,int sz)
//{
//	int tmp;
//	int i = 0;
//	while (i <= sz - 1)
//	{
//		 tmp=*(a + i) ;
//		 *(a + i) = *(a + sz - 1);
//		 *(a + sz - 1) = tmp;
//		 i++;
//		 sz--;
//	}
//}
//print(int* a)
//{
//	for (int i = 0; i < 6; i++)
//		printf("%d ", *(a + i));
//}
//
//int main()
//{
//	int arr[6];
//	init(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 6; i++)
//			{
//				scanf("%d", &arr[i]);
//			}
//	reverse(arr,sz);
//	print(arr);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d", p);
//	return 0;
//}
//int main()
//{
//	int a = 3,b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//int main()
//{
//	/*int* a = (int*)malloc(4 * sizeof(int));
//	printf("%d", sizeof(a));
//	realloc(a, 3* sizeof(int));
//	printf("%d", sizeof(a));*/
//	int a = strlen("abcd");
//	printf("%d", a);
//
//	return 0;
//}
//void jiou(int a)
//{
//	if (a > 9) 
//		jiou(a / 10);
//	if((a%10)%2==0)
//		printf("0");
//	else
//		printf("1");
//
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	jiou(a);
//	return 0;
//}
//int main()
//{
//	int a,b=1,c=0;
// 	scanf("%d", &a);
//	while (a != 0)
//	{
//		if ((a % 10) % 2 != 0)
//			c += b;
//		a /= 10;
//		b *= 10;
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	char arrr[100] = { 0 };
//	scanf("%s", arrr);
//	char* arr = arrr;
//	int c = 0, h = 0, chn = 0;
//	while (*arr)
//	{
//		if (*arr == 'C')
//			c++;
//		if (*arr == 'H')
//			h += c;
//		if (*arr == 'N')
//			chn += h;
//		*arr++;
//	}
//	printf("%lld", chn);
//	return 0;
//}
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM); 
//	return 0;
//}
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	printf("%d", f(1));
//	return 0;
//}
//#define n 100;
//int main()
//{
//	int arr[n][n] = { 0 };
//	return 0;

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	printf("%s", p);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    int size;
//    char* str;
//
//    printf("Enter the size of the string: ");
//    scanf("%d", &size);
//
//    // 动态分配一个大小为size的char数组
//    str = (char*)malloc(size * sizeof(char));
//
//    printf("Enter a string: ");
//    // 使用fgets函数读取用户输入的字符串，并将其存储在动态分配的数组中
//    fgets(str, size, stdin);
//
//    printf("You entered: %s\n", str); // 输出字符串
//
//    // 释放动态分配的内存
//    free(str);
//
//    return 0;
//}

int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}

