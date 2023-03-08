#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int i = 6;
//    for (int b = 2; b <= i; b++)
//    {
//        if (i != b && 0 == i % b)
//        {
//            break;
//        }
//    }
//	system("pause");
//	return 0;
//}
int main() {
	char str[] = "Geneius";
	print(str); return 0;
}
print(char* s) {
	if (*s) {
		print(++s);
		printf("%c", *s);
	}
}