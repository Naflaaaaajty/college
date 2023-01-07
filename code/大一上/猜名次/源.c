#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= 5; b++)
        {
            for (c = 1; c <= 5; c++)
            {
                for (d = 1; d <= 5; d++)
                {
                    for (e = 1; e <= 5; e++)
                    {
                        if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
                        {
                            if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
                            {
                                if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
                                {
                                    if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
                                    {
                                        if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
                                        {//对五个值均不相同的判断
                                            if (((a != b) && (a != c) && (a != d) && (a != e))
                                                && ((b != c) && (b != d) && (b != e))
                                                && ((c != d) && (c != e))
                                                && ((d != e)))
                                            {
                                                printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
