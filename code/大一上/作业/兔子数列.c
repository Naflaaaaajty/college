#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	long f1, f2;
	int i;
	f1 = f2 = 1;
	for (i = 1; i <= 20; i++)
	{
		printf("%12ld %12ld", f1, f2);
		if (i % 2 == 0)
		{
			printf("\n");
		}
		f1 = f1 + f2;
		f2 = f1 + f2;
	}
	return 0;
}
  /*�ؼ��� long int for if return
  ����� = <= % + == ++ ,
  ��ʶ�� f1 f2 i printf main
  ���� 20 1 0 2 
  �ַ��� \n %12ld  																																														
  �����  # <> ; () {} , �ո�   */