#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int a, b, c, d;
    int arr[] = { 31,60,91,121,152,182,213,244,274,305,335,366 };
    int brr[] = { 31,59,90,120,151,181,212,243,273,304,334,365 };
    scanf("%d %d %d", &a, &b, &c);
    if (b < 2) {
        printf("%d", c);
        goto final;
    }
    b -= 2;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        c += arr[b];
    }
    else
    {
        c += brr[b];
    }
    printf("%d", c);
    final:
    return 0;
}
//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}