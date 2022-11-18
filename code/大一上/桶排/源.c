#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//÷±Ω”Õ∞≈≈∏„∂®
int main() {
    int arr[1001] = { 0 };
    int n = 0;
    int tmp = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }
        
    for (int i = 0; i < 1001; i++) {
        if (arr[i] != 0)
            printf("%d ", i);
    }
    return 0;
}
