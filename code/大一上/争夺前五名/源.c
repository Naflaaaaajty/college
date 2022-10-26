//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int arr[20]={0};
//	scanf("%d",&i);
//	for (int j = 0; j < i; j++)
//	{
//		scanf("%d",&arr[j]);
//	}
//	int min=1000,max=0;
//	for (int j = 0; j < 5; j++)
//	{
//		for (int a = 0; a < i; a++)
//		{
//			/*if (max <= arr[a] && arr[a] <= min)*/
//			if ((max < arr[a] && arr[a] < min) || max == arr[a])
//				max = arr[a];
//	     }
//		printf("%d ", max);
//		min = max;
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[40];
    int i, j;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        int temp;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
