#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>


//int main()
//{
//	int i = 0;
//	while (i < 3)
//		i++;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%c", toupper('A'));
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr1[10] = { 0 };
//	/*char arr[] = { 'a','b','c','d','\0'};
//	char arr1[5];*/
//	printf("%x",memcpy(arr1, arr, 5));
//	printf("%x",arr1);
//
//	return 0;
//}
//int main()
//{
//	int a = 1,b=3;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int count = 0,i=0;
//	for ( i = 0; i < 2; i++)
//	{
//		count++;
//	}
//	i = 0;
//	for (i = 0; i < 2; ++i)
//		count++;
//
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int i;
//    double x;
//    x = 7.7;
//    scanf("%d", &i);
//    if (i <= 1)
//    {
//        printf("实际利率=%.2lf%%", x * 0.5);
//    }
//    else if ((i <= 3) && (i > 1))
//    {
//        printf("实际利率=%.2lf%%", x * 0.7);
//    }
//    else if ((i > 3) && (i <= 5))
//    {
//        printf("实际利率=7.7%%");
//    }
//    else if (i > 5)
//    {
//        printf("实际利率=%.2lf%%", x * 1.1);
//    }
//    else if (i <= 0)
//    {
//        printf("error");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a, count = 0, tmp;
//    scanf("%d", &a);
//    for (int i = 1; i <= a; i++)
//    {
//        if (i < 10)
//        {
//            if ( i== 2 || i == 1 || i == 9)
//                count += i;
//        }
//        else {
//            
//        tmp = i;
//        while (tmp)
//        {
//   
//            if (tmp % 10 == 2 || tmp % 10 == 1 || tmp % 10 == 9|| tmp %10==0)
//            {
//                count += i;
//                break;
//            }
//            tmp /= 10;
//        }
//    }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main(int argc, char* argv[])
//{
//    int count = 0, a = 0;
//    scanf("%d", &count);
//    a = count;
//    while (count>2) {
//        a += (count / 3);
//        count = count / 3 + count % 3;
//    }
//    printf("%d", a);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//int getnk(int n, int m, int* pn)
//{
//    int count = 0;
//    while (n <= m)
//    {
//        count += pn[n];
//        n++;
//    }
//    return count;
//}
//int main()
//{
//    int nums, k, count = 0;
//    int* pn;
//    scanf("%d %d", &nums, &k);
//    pn = (int*)malloc(4 * nums);
//    for (int i = 0; i < nums; i++)
//    {
//        scanf("%d", &pn[i]);
//        if (pn[i] % k == 0)
//            count++;
//    }
//    for (int i = 2; i <= nums; i++)
//    {
//        int j = 0, l = i - 1;
//        while (l <= nums - 1)
//        {
//            if (getnk(j, l, pn) % k == 0)
//                count++;
//            j++;
//            l++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
int main()
{
	int arr[10] = {0};
	for (int i =0; i <=10; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}