#include"Heap.h"
void HeapInit(HP* php)
{
	assert(php);

	php->a = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (php->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	php->size = 0;
	php->capacity = 4;
}
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->capacity = 0;
	php->size = 0;
}
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	
	while (child > 0 && parent>=0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType x = *p1;
	*p1 = *p2;
	*p2 = x;
}
int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}
bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
HPDataType HeapTop(HP* php)
{
	assert(php);
	return php->a[0];
}
void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);

}
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		php->a = (HPDataType*)realloc(php->a, sizeof(HPDataType) * php->capacity * 2);
		php->capacity *= 2;
	}
	php->a[php->size++] = x;
	AdjustUp(php->a, php->size - 1);
}
void AdjustDown(HPDataType* a, int n, int parent)
{
	assert(a);
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else 
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)
{
	assert(a);
	//for (int i = 1; i < n; ++i)
	//{
	//	AdjustUp(a, i);
	//}
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end--, 0);
	}
}
