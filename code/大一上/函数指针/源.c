#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>

//
//int my_strlen(const char* str)
//{
//	return 0;
//}
//
//int main()
//{
//	//指针数组
//	char* ch[5];
//
//	int arr[10] = {0};
//	//pa是数组指针
//	int (*pa)[10] = &arr;
//	
//	//pf是函数指针
//	int (*pf)(const char*) = &my_strlen;
//
//	//函数指针数组
//	int (*pfA[5])(const char*) = { &my_strlen};
//	return 0;
//}
//

//写一个计算器整数加、减、乘、除
//a&b a|b a^b a>>b a<<b
//
#include <stdio.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("****** 1. add   2. sub    *****\n");
//	printf("****** 3. mul   4. div    *****\n");
//	printf("****** 0. exit            *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("****** 1. add   2. sub    *****\n");
//	printf("****** 3. mul   4. div    *****\n");
//	printf("****** 0. exit            *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////函数指针数组存放上述函数的地址
////转移表
//int (*pf[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input>=1 &&input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}
//




//int main()
//{
//	int arr[10];
//	int (*pA)[10] = &arr;
//
//	//函数指针数组
//	int (* pf[5])(int, int);
//
//	//ppf是指向函数指针数组的指针
//	int (*(* ppf)[5])(int, int) = &pf;
//
//	return 0;
//}


//
//void menu()
//{
//	printf("*******************************\n");
//	printf("****** 1. add   2. sub    *****\n");
//	printf("****** 3. mul   4. div    *****\n");
//	printf("****** 0. exit            *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//字符数组
//浮点型
//结构体
//
//只能排序整数
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
// 


//实现一个比较整型的函数
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//使用qsort对数组进行排序，升序
void test1()
{

	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	//库函数中一个排序函数：qsort
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//0 1 2 3 4 5 6 7 8 9
	//打印
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//使用qsort 排序结构体
struct Stu
{
	char name[20];
	int age;
};

//按照学生的年龄来排序
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	struct Stu s[3] = { {"zhangsan",20}, {"lisi", 50}, {"wangwu", 33} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//改造冒泡排序函数，使得这个函数可以排序任意指定的数组
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	//趟数
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


//使用我们自己写的bubble_sort函数排序整型数组
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//使用我们自己写的bubble_sort函数排序结构体数组
void test4()
{
	struct Stu s[3] = { {"zhangsan",20}, {"lisi", 50}, {"wangwu", 33} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

//

//void qsort(void* base, //待排序的数组的起始地址
//	      size_t num,    //元素个数
//	      size_t width,  //一个元素的大小
//	      int (*cmp)(const void* e1, const void* e2)//两个元素的比较函数
//          );
//


//int main()
//{
//	int a = 10;
//	float f = 5.5f;
//	int* p = &a;
//	//p = &f;
//
//	//pp - 垃圾桶
//	void* pp = &f;
//	//pp = &a;
//	pp++;
//	printf("%f\n", *pp);
//	return 0;
//}