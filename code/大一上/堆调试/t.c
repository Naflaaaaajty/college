#include"Heap.h"
int main()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp, 2);
	HeapPush(&hp, 3);
	HeapPush(&hp, 5);
	HeapPush(&hp, 1);
	HeapPush(&hp, 8);
	HeapPush(&hp, 42);
	HeapPush(&hp, 54);
	HeapPush(&hp, 4);
	HeapPush(&hp, 0);
	for (int i = 0; i < hp.size; i++)
	{
		printf("%d ", hp.a[i]);
	}	
	HeapSort(hp.a, hp.size);
	printf("\n");
	for (int i = 0; i < hp.size; i++)
	{
		printf("%d ", hp.a[i]);
	}

	return 0;
}