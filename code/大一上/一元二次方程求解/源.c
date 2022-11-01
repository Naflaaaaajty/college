#include <math.h>
#include <stdio.h>

int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (scanf("%f %f %f", &a, &b, &c) == 3)
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            float deta = b * b - 4 * a * c;
            if (deta >= 0)
            {
                float result1 = (-b + sqrt(deta)) / (2 * a);
                float result2 = (-b - sqrt(deta)) / (2 * a);
                if (deta > 0)
                {
                    printf("x1=%.2f;x2=%.2f\n", result2, result1);
                }
                else
                {
                    if (result1 == 0)
                    {
                        printf("x1=x2=0.00\n");
                    }
                    else
                    {
                        printf("x1=x2=%.2f\n", result1);
                    }
                }
            }
            else
            {
                float shibu = (-b) / (2.0 * a);
                float xubu = (sqrt(-deta)) / (2.0 * a);
                if (xubu < 0)
                {
                    xubu = -xubu;
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
                }
                else
                {
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
                }
            }
        }
    }
    return 0;
}
