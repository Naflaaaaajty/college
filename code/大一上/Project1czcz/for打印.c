#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    /*char 变量在内存中存储的是字符对应的 ASCII 码值。
如果以 %c 输出，会根据 ASCII码表转换成对应的字符，如果以 %d 输出，那么还是整数。
所以本题只需以循环并且以%c的形式输出即可
*/
    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };

    //求数组长度
    int length = sizeof(ch);
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
	system("pause");
	return 0;
}