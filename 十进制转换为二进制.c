#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
    int n;
    printf("请输入要转换的数字：");
    scanf_s("%d", &n);
    j(n);
    system("pause");
    return 0;
}
j (int n)
{
    int sum = 0;
    int y, x = 1;
    while (n != 0)
    {
        y = n % 2;
        sum += x * y;
        x *= 10;
        n /= 2;
    }
    printf("这是它的二进制数：%d\n", sum);
}