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
//解题思路
//此题可以使用异或来解决
//首先要明白异或的一些性质：
//** 1. * *相同为0，相异为1
//* *2. * *a ^ a = 0, a ^ 0 = a, a ^ b = b ^ a
//这些性质是理解代码的关键
//
//假设nums数组是[0, 1, 2, 4], 要找出数字3
//
//解题步骤如下：
//1.使用for循环求出异或和：0 ^ 1 ^ 2 ^ 4
//2.使用for循环将异或和与数组[0, 1, 2, 3, 4]的元素相异或，即0 ^ 1 ^ 2 ^ 4 ^ 0 ^ 1 ^ 2 ^ 3 ^ 4
//由于a ^ a = 0, a ^ 0 = 0, a ^ b = b ^ a, 所以最终相同的元素会抵消，而只出现一次的3将留下
//
//作者：gaoxuxi
//链接：https ://leetcode.cn/problems/missing-number-lcci/solution/by-gaoxuxi-o6jk/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//还可以用数组求和在与全部相减