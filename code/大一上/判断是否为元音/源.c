#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int temp = 0;
    char crr;
    char vowel[10] = { 'a','A','e','E','i','I','o','O','u','U' };
    while (scanf("%c", &crr) != EOF)
    {
        if (crr != '\n')
        {
            for (temp = 0; temp < 10; temp++)
            {
                if (crr == vowel[temp])
                {
                    printf("Vowel\n");
                    temp = 20;
                }
            }
            if (temp == 10)
            {
                printf("Consonant\n");
            }
        }
    }
	system("pause");
	return 0;
}