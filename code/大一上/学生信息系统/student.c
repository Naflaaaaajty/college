#include"student.h"
void menu()
{
	printf("------ѧ����Ϣ����ϵͳV2.0--------\n");
	printf("*       1. �����༶				*\n");
	printf("*       2. ѧ����Ϣ¼��			*\n");
	printf("*       3. ѧ����Ϣɾ��			*\n");
	printf("*       4. ѧ����Ϣ����			*\n");
	printf("*       4. ѧ����Ϣ�޸�			*\n");
	printf("*       5. ѧ����Ϣ��ʾ			*\n");
	printf("*       6. ѧ����Ϣ����			*\n");
	printf("*       0. �˳�ϵͳ				*\n");
	printf("----------------------------------\n");
	printf("*  ���ߣ�����Ԫ��ѧ�ţ�2022401760219  *\n");
	printf("----------------------------------\n");
}
void password(void)
{
	char pass[200] = {0},ans[]="jty";
	int count = 3;
	printf("���������룺\n");
	scanf("%s", pass);
	while (--count)
	{
		 
		if (!strcmp(pass, ans))
		{
			printf("������ȷ\n");
			Sleep(1000);
			break;
		}
		else
		{	
			printf("�㻹��%d�λ���\n",count);
			printf("���������룺\n");
			scanf("%s", pass);
			
		}
	}
	assert(count);
}

int a = 0;
LTNode* creatclass(LTNode* class)
{
	if (!a)
	{
	  printf("��������Ҫ���������༶\n");
	  scanf("%d", &a); 
	  class->size = a;
	  for (int i = 0; i < a; i++)
	  {
		  ListPushBack(class, NULL);
	  }
	}
	else
	{
		printf("��������Ҫ���������ٸ��༶\n");
		int num = a - class->size;
		while (num)
		{
			ListPushBack(class, NULL);
		}
		
	}
	return class;

}
void initclass(LTNode* head)
{
	LTNode* cur = head->next;
	while (cur != head)
	{
		cur->classs= ListInit();
		cur = cur->next;
	}
	
}
void stuadd(LTNode* class)
{
	int j = 0;
	printf("��ѡ����Ҫ�����Ǹ��༶������%d���༶\n", a);
	scanf("%d", &j);

}
stu* scanstu()
{
	stu* date = (stu*)malloc(sizeof(stu));

	return date;
}







