#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
    int x = 0;
   
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        x ^= nums[i];
    }
    
    for (i = 0; i < numsSize + 1; i++)
    {
        x ^= i;
    }
    return x;
}
//����˼·
//�������ʹ����������
//����Ҫ��������һЩ���ʣ�
//** 1. * *��ͬΪ0������Ϊ1
//* *2. * *a ^ a = 0, a ^ 0 = a, a ^ b = b ^ a
//��Щ������������Ĺؼ�
//
//����nums������[0, 1, 2, 4], Ҫ�ҳ�����3
//
//���ⲽ�����£�
//1.ʹ��forѭ��������ͣ�0 ^ 1 ^ 2 ^ 4
//2.ʹ��forѭ��������������[0, 1, 2, 3, 4]��Ԫ������򣬼�0 ^ 1 ^ 2 ^ 4 ^ 0 ^ 1 ^ 2 ^ 3 ^ 4
//����a ^ a = 0, a ^ 0 = 0, a ^ b = b ^ a, ����������ͬ��Ԫ�ػ��������ֻ����һ�ε�3������
//
//���ߣ�gaoxuxi
//���ӣ�https ://leetcode.cn/problems/missing-number-lcci/solution/by-gaoxuxi-o6jk/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
//�������������������ȫ�����