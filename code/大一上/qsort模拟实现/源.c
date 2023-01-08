#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_qsort(void *base,size_t sz,size_t width,int (*cmp)(const void *e1, const void *e2))
{
	for (size_t i = 0; i < sz - 1; i++)
	{
		for (size_t j = 0; j < sz - 1 - i; j++)
		{
			if (int_cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
		}
	}
}
int int_cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int sz;
	printf("请输入数组元素个数\n");
	scanf("%d", &sz);
	int* arr=(int*)malloc(sz * sizeof(int));
	printf("请输入数组\n");
	for (int i = 0; i < sz; i++)
		scanf("%d", &arr[i]);
	bubble_qsort(arr,sz,sizeof(int),int_cmp);
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}