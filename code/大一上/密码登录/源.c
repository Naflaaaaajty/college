#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int sz =16;
	printf("���������룺");
	for (i = 0; i< 4; i++)
	{
		char brr[20]={0};
		scanf("%s", &brr);
		if (strcmp(brr,"jty") == 0)
		{
			printf("��ӭ��¼\n");
			break;
		}
		else if(i!=3)
			printf("�����ԣ�");
	}
	if (i == 4)
		printf("���\n");
	system("pause");
	return 0;
}