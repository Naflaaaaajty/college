#define _CRT_SECURE_NO_WARNINGS
//�ҵ������ǹؼ�������һ����б�ܺͷ�б��
#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)  //��ѭ��Ϊ��
        {
            for (int j = 0; j < n; j++) //��ѭ��Ϊ��
            {
                if (i == j || i + j == n - 1)
                    //��ؼ��ĵط�����б��Ϊ[i][i]����*�� ��б��Ϊ[i][n-1-j]����*��һ�д�ӡ1����2��*
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n"); //��ӡ��һ�У�����
        }
    }
    return 0;
}