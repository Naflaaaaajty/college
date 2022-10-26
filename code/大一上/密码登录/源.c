#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0,j=0;
	char brr[20] = { 0 };
	printf("«Î ‰»Î√‹¬Î£∫");
	for (i = 0; i< 3; i++)
	{
		scanf("%s", brr);
		if (strcmp(brr,"jty") == 0)
		{
			printf("ª∂”≠µ«¬º\n");
			j++;
			break;
		}
		else if(i!=2)
			printf("«Î÷ÿ ‘£∫");
	}
	if (j== 0)
		printf("øÏπˆ\n");
	system("pause");
	return 0;
}