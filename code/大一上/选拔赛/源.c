#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int lower, k, a[4], min = 10000, max = 0, count = 0, b = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &lower, &k);

    for (int i = 0; i < 4; i++)
    {
        if (a[i] >= max)
            max = a[i];
        if (a[i] <= min)
            min = a[i];
    }
    if ((max - min) <= k && a[0] >= lower && a[1] >= lower && a[2] >= lower && a[3] >= lower)
        puts("Normal");
    else {
        for (int i = 0; i < 4; i++)
        {
            if ((max - a[i]) > k)
            {
                count++;
                b = i;
            }

        }
        if (count > 1)
            puts("Warning: please check all the tires!");
        
        else if (count = 0)
        {
            
                for (int i = 0; i < 4; i++)
                {
                    if (a[i] < lower)
                        printf("Warning: please check #%d!", i + 1);
                }
        }
        else
            printf("Warning: please check #%d!", b + 1);
    }
    return 0;
}
