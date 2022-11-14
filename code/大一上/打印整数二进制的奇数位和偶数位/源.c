#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//
//int binary(int n)
//{
//    int sum = 0;
//    int y, x = 1, count = 0;
//    while (n != 0)
//    {
//        y = n % 2;
//        sum += x * y;
//        x *= 10;
//        n /= 2;
//    }
//	return sum;
//}
//int num1(int a)
//{
//    int n = 1,count=0;
//    while (a != 0)
//    {
//        count += n * (a % 10);
//        n *= 100;
//        a /= 100;
//    }
//    return count;
//}
//int num2(int a)
//{
//    int n = 10, count = 0;
//    while (a != 0)
//    {
//        n /= 10;
//        count += n * (a % 10);
//        n *= 100;
//        a /= 100;
//    }
//    return count;
//}
//int main()
//{
//    int a,b,c;
//    scanf("%d", &a);
//    a= num1(a);
//    b = num1(a);
//    c = num2(a);
//    printf("%d\n", b);
//    printf("%d", c);
//
//	return 0;
//}
int main() {
	int num = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	printf("奇数位：");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}