#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<malloc.h>
#define row 800
#define col 800

int arr[row][col] = { {0,0,1,0,0},{0,1,0,1,0},{1,0,1,0,1} };


//int main()
//{
//	int a,b,count=1,c;
//	scanf("%d", &a);
//	b = (pow(2, a - 1)*6-2)/2;
//	c = pow(2, a - 1) * 6 - 1;
//	for (int i = 0; i < b + 1; i++)
//	{
//		for (int j = 0; j < b - i; j++)
//			printf(" ");
//		if (i < 3)
//		{
//			for(int m=0;m<i+1;m++)
//				printf("* ");
//			printf("\n");
//		}
//		if (i % 3 == 0)
//		{
//			for(int l=0;)
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a,c,b;
//	char** arr=NULL;
//	scanf("%d", &a);
//	c = pow(2, a - 1) * 6 - 1;
//	b = a + pow(2, a - 1)*3;
//	arr = (char**)malloc(c * sizeof(char*));
//	for (int i = 0; i < b; i++)
//		arr[i] = (char*)malloc(b * sizeof(char));
//
//	return 0;
//}
//void PrinTri(int arr[row][col], int height, int lenth)   /*将数组某个范围的内容打印出来*/
//{
//    int i = 0;
//    for (i = 0; i < height; i++)
//    {
//        int j = 0;
//        for (j = 0; j < lenth; j++)
//        {
//            if (0 == arr[i][j])
//            {
//                printf(" ");
//            }
//            else if (1 == arr[i][j])
//            {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[row][col] = { {0,0,1,0,0},{0,1,0,1,0},{1,0,1,0,1} };
//    int lenth = 5;    /*  三角形起始长度为5 满足规律 lenth = 6 * 2 ^ (n - 1) - 1      */
//    int  height = 3;  /*  三角形起始长度为3 满足规律 height= 3 * 2 ^ （n - 1）        */
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 2; i <= n; i++)                     /*n>=2时才需要进行向下复制三角形的操作*/
//    {
//
//        int k = 0;
//        for (k = 0; k < height; k++)            /*嵌套循环遍历第i-1阶三角形*/
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)   /*这里不写j<lenth是为了提高代码效率*/
//            {
//                arr[k + height][j] = arr[k][j];
//                /*本行代码实现了向下复制一个第i-1阶三角形*/
//                arr[k + height][j + lenth + 1] = arr[k][j];
//                /*本行代码实现了向下并向右复制一个i-1阶三角形*/
//            }
//        }
//        for (k = 0; k < height; k++)             /*删除height lenth范围中三角形的代码*/
//            //也就是删除i-1阶三角形的代码
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)
//            {
//                arr[k][j] = 0;
//            }
//        }
//        for (k = 0; k < height; k++)              /*将i-1阶三角形复制到中间位置的代码*/
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)
//            {
//                arr[k][j + lenth / 2 + 1] = arr[k + height][j];
//            }
//        }
//        lenth = 6 * (int)pow(2, i - 1) - 1;        /*复制完后调整范围准备下一次循环*/
//        height = 3 * (int)pow(2, i - 1);
//    }
// 
//    PrinTri(arr, height, lenth);
//    return 0;
//}
//int main() {
//int i, j;
//int k, h, n, z, s, m;
//int rowbegin, rowend, rankbegin, rankend;
//
//scanf("%d", &n);		//输入数值
//
//int X = 3 * (1 << n - 1);
//int Y = 5 * (1 << n - 1) + (1 << n - 1) - 1;
//
//char b[X][Y];			//定义一个刚好可以存放图形的二维数组
//
//
//for (i = 0; i < X; i++)			//将数组初始化，全为空格
//{
//	for (j = 0; j < Y; j++)
//	{
//
//		b[i][j] = ' ';
//
//
//	}
//
//}
//for (i = 0; i < 3; i++)			//将输入为 1 时的图形存放到数组内
//{
//	for (j = 0; j < 5; j++)
//	{
//		if ((i == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0) || i == j)
//		{
//			b[i][j] = '*';
//		}
//		else
//		{
//			b[i][j] = ' ';
//		}
//
//	}
//
//}
//
//for (h = 0, z = 0, k = 0, s = 0, m = 0; s < n + n - 1; h++, z++, s++, k = 0)	//控制循环的次数
//{
//
//	if (z > 1)
//	{
//		z = 0;
//		h--;
//		k = h;
//		m = k;
//	}
//
//	rowbegin = (k > 0) * 3 * (1 << k - 1);		//控制行的开始数值
//	rowend = 3 * (1 << m);					//控制行的结束数值
//
//	rankbegin = (h > 0) * (5 * (1 << (h - 1)) + (1 << (h - 1))) - ((k > 0) << k - 1) * (3); //控制列的开始数值
//	rankend = 5 * (1 << h) + (1 << h) - 1 - ((k > 0) << k - 1) * (3);					//控制列的结束数值
//
//	for (i = rowbegin; i < rowend; i++)
//	{
//		for (j = rankbegin; j < rankend; j++)
//		{
//			b[i][j] = b[i - rowbegin][j - rankbegin];
//		}
//	}
//}
//
//
//for (i = X - 1; i >= 0; i--)				//输出树叶
//{
//	for (j = Y - 1; j >= 0; j--)
//	{
//		printf("%c", b[i][j]);
//
//	}
//
//	putchar('\n');
//}
//
//for (i = 0; i < n; i++)				//输出树干
//{
//	for (j = 0; j < Y; j++)
//	{
//		printf("%c", b[X - 1][j]);
//	}
//
//	putchar('\n');
//}
//
//return 0;
//将现有的三角形进行整体复制
#include<stdio.h>
#include<math.h>
int main()
{
    char arr[800][800] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int y = 3 * pow(2, n - 1) - 1;//y表示顶点在第一行的下标值
    arr[0][y] = '*';
    arr[1][y - 1] = '*';
    arr[1][y + 1] = '*';
    arr[2][y - 2] = '*';
    arr[2][y + 2] = '*';
    arr[2][y] = '*';
    //第一次循环，将[最上面的最小的三角形]赋值到对应其[左下的三角形]位置和[右下的三角形]位置
    //如果有第二次循环，则将由[三个小三角形构成的三角形]赋值到左下和右下。
    for (int i = 1; i < n; i++)//n表示复制n-1次
    {
        int rang = (3 * pow(2, i - 1) - 1);
        for (int x1 = 0; x1 <= rang; x1++)
        {
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
            }
        }
        for (int x1 = 0; x1 <= rang; x1++)
        {
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
            }
        }
    }
    //打印树叶
    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
    {
        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
        {
            if (arr[i][j] == '*')
                printf("%c", arr[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    //打印树干
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
