#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int ar = getchar();
    if (ar >= 65 && ar <= 90 || ar >= 97 && ar <= 122)
        printf("YES");
    else
        printf("NO");
	system("pause");
	return 0;
}