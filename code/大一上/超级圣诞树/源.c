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
//void PrinTri(int arr[row][col], int height, int lenth)   /*������ĳ����Χ�����ݴ�ӡ����*/
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
//    int lenth = 5;    /*  ��������ʼ����Ϊ5 ������� lenth = 6 * 2 ^ (n - 1) - 1      */
//    int  height = 3;  /*  ��������ʼ����Ϊ3 ������� height= 3 * 2 ^ ��n - 1��        */
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 2; i <= n; i++)                     /*n>=2ʱ����Ҫ�������¸��������εĲ���*/
//    {
//
//        int k = 0;
//        for (k = 0; k < height; k++)            /*Ƕ��ѭ��������i-1��������*/
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)   /*���ﲻдj<lenth��Ϊ����ߴ���Ч��*/
//            {
//                arr[k + height][j] = arr[k][j];
//                /*���д���ʵ�������¸���һ����i-1��������*/
//                arr[k + height][j + lenth + 1] = arr[k][j];
//                /*���д���ʵ�������²����Ҹ���һ��i-1��������*/
//            }
//        }
//        for (k = 0; k < height; k++)             /*ɾ��height lenth��Χ�������εĴ���*/
//            //Ҳ����ɾ��i-1�������εĴ���
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)
//            {
//                arr[k][j] = 0;
//            }
//        }
//        for (k = 0; k < height; k++)              /*��i-1�������θ��Ƶ��м�λ�õĴ���*/
//        {
//            int j = 0;
//            for (j = 0; j < lenth / 2 + k + 1; j++)
//            {
//                arr[k][j + lenth / 2 + 1] = arr[k + height][j];
//            }
//        }
//        lenth = 6 * (int)pow(2, i - 1) - 1;        /*������������Χ׼����һ��ѭ��*/
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
//scanf("%d", &n);		//������ֵ
//
//int X = 3 * (1 << n - 1);
//int Y = 5 * (1 << n - 1) + (1 << n - 1) - 1;
//
//char b[X][Y];			//����һ���պÿ��Դ��ͼ�εĶ�ά����
//
//
//for (i = 0; i < X; i++)			//�������ʼ����ȫΪ�ո�
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
//for (i = 0; i < 3; i++)			//������Ϊ 1 ʱ��ͼ�δ�ŵ�������
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
//for (h = 0, z = 0, k = 0, s = 0, m = 0; s < n + n - 1; h++, z++, s++, k = 0)	//����ѭ���Ĵ���
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
//	rowbegin = (k > 0) * 3 * (1 << k - 1);		//�����еĿ�ʼ��ֵ
//	rowend = 3 * (1 << m);					//�����еĽ�����ֵ
//
//	rankbegin = (h > 0) * (5 * (1 << (h - 1)) + (1 << (h - 1))) - ((k > 0) << k - 1) * (3); //�����еĿ�ʼ��ֵ
//	rankend = 5 * (1 << h) + (1 << h) - 1 - ((k > 0) << k - 1) * (3);					//�����еĽ�����ֵ
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
//for (i = X - 1; i >= 0; i--)				//�����Ҷ
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
//for (i = 0; i < n; i++)				//�������
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
//�����е������ν������帴��
#include<stdio.h>
#include<math.h>
int main()
{
    char arr[800][800] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int y = 3 * pow(2, n - 1) - 1;//y��ʾ�����ڵ�һ�е��±�ֵ
    arr[0][y] = '*';
    arr[1][y - 1] = '*';
    arr[1][y + 1] = '*';
    arr[2][y - 2] = '*';
    arr[2][y + 2] = '*';
    arr[2][y] = '*';
    //��һ��ѭ������[���������С��������]��ֵ����Ӧ��[���µ�������]λ�ú�[���µ�������]λ��
    //����еڶ���ѭ��������[����С�����ι��ɵ�������]��ֵ�����º����¡�
    for (int i = 1; i < n; i++)//n��ʾ����n-1��
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
    //��ӡ��Ҷ
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
    //��ӡ����
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
