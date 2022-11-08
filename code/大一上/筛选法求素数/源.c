#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	int sz,count=0;
	while (scanf("%d", &sz) != EOF)
	{
	  a= (int*)malloc((sz - 1) * sizeof(int));
	  for (int i = 0; i < sz - 1; i++)
		  a[i] = i+2;
	  for (int i = 2; i <= sz; i++)
	  {
		  for (int j = 0; j < sz - 1; j++)
		  {
			  if (a[j] % i == 0 && a[j]!=i)
			  {
				  a[j] = 0;
			  }
		  }
	  }
	  for (int i = 0; i < sz - 1; i++)
		  if (a[i] != 0)
			  printf("%d ", a[i]);
		  else
			  count++;
	  printf("\n%d",count);
	}
	return 0;
}