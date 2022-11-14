#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    int year, month;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        switch (month)
        {
        case 2:
            if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
            {
                printf("29\n"); break;
            }
            else
            {
                printf("28\n"); break;
            }
        case 4:
        case 6:
        case 9:
        case 11: printf("30\n"); break;
        default: printf("31\n"); break;
        }
    }
    return 0;
}