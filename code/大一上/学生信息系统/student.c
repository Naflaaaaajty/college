#include"student.h"
passw* pass;
void menu()
{
	printf("------ѧ����Ϣ����ϵͳV2.0-----------\n");
	printf("*       1. �����༶		    *\n");
	printf("*       2. ѧ����Ϣ¼��		    *\n");
	printf("*       3. ѧ����Ϣɾ��		    *\n");
	printf("*       4. ѧ����Ϣ����	   	    *\n");
	printf("*       5. ѧ����Ϣ�޸�		    *\n");
	printf("*       6. ѧ����Ϣ��ʾ		    *\n");
	printf("*       7. ѧ����Ϣ����		    *\n");
	printf("*       8. ����ѧ����Ϣ����ϵͳ	    *\n");
	printf("*       0. �˳�ϵͳ		    *\n");
	printf("-------------------------------------\n");
	printf("*  ���ߣ�����Ԫ ѧ��:2022401760219  *\n");
	printf("-------------------------------------\n");
}
void password(void)
{
	char pass_[200] = {0};
	int count = 3;
	if (pass->flag)
	{
		printf("����δע��\n������ע������(�������Ϊ18λ)��\n");
		scanf("%s", pass->pass);
		pass->a = 0;
		pass->flag = false;
	}
	else
	{
		printf("���������룺");
		scanf("%s", pass_);
		while (--count)
		{
			if (!strcmp(pass_, pass->pass))
			{
				printf("������ȷ\n");
				Sleep(1000);
				break;
			}
			else
			{
				printf("�㻹��%d�λ���\n", count);
				printf("���������룺\n");
				scanf("%s", pass_);
			}
		}
		assert(count);
	}

}
void creatclass(LTNode* class)
{
	if (!pass->a)
	{
	  printf("��������Ҫ���������༶\n");
	  scanf("%d", &pass->a); 
	  class->size =pass->a;
	  for (int i = 0; i < pass->a; i++)
	  {
		  ListPushBack(class, NULL);
	  }
	  LTNode* cur = class->next;
	  while (cur != class)
	  {	  
		  initclass(cur);
		  cur = cur->next; 
	  }
	}
	else
	{again:
		printf("��������Ҫ���������ٸ��༶(����%d���༶)��",pass->a);
		scanf("%d", &pass->a);
		if (pass->a<class->size)
		{
			pass->a = class->size;
			goto again;
		}
		LTNode* cur = class->prev;

		int num =pass->a - class->size;
		while (num--)
		{
			ListPushBack(class, NULL);
		}
		while (cur != class)
		{	
			cur = cur->next;
			initclass(cur);
		}
	}
}
void initclass(LTNode* head)
{
	head->classs= ListInit();
	head->classs->size = 0;
}
void stuadd(LTNode* class)
{
again:;
	int j,i=0;
	if (!pass->a)
	{
		puts("�ް༶");
		return;
	}
	printf("��ѡ����Ҫ�����Ǹ��༶������%d���༶", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("������Ϸ�����\n");
		goto again;
	}
	LTNode* head=manegeclass(class,j);
	printf("��������Ҫ�������ѧ����Ϣ��");
	scanf("%d", &i);
	head->size += i;
	while(i--)
	ListPushBack(head, scanstu());
	average(class);
}
stu* scanstu()
{
	stu* date = (stu*)malloc(sizeof(stu));
	if (!date)
	{
		perror("scanstu failled");
		assert(date);
		return;
	}
	puts("--------------------------------------------------------------------");
	printf("����������:");
	scanf("%s", date->name);
	printf("\n�������Ա�:");
	scanf("%s", date->sex);
	printf("\n������ѧ��:");
	scanf("%s", date->id);
	printf("\n��������ѧ�ɼ�:");
	scanf("%d", &date->math);
	printf("\n������C���Գɼ�:");
	scanf("%d", &date->cpp);
	printf("\n������Ӣ��ɼ�:");
	scanf("%d", &date->english);
	puts("--------------------------------------------------------------------\n");
	return date;
}
LTNode* manegeclass(LTNode* class,int j)
{
	LTNode* cur = class;
	for (int i = 0; i < j; i++)
	{
		cur = cur->next;
	}
	return cur->classs;
}
void loadpass(void)
{
	FILE* pf = fopen("password.txt", "rb");
	if (NULL == pf)
	{
		return;
	}
	fread(pass, sizeof(passw), 1, pf);
	fclose(pf);
	pf = NULL;
}
void savepass(void)
{
	FILE* pf = fopen("password.txt", "wb");
	if (NULL == pf)
	{
		perror("fopen");
		return;
	}
	fwrite(pass, sizeof(passw), 1, pf);
	fclose(pf);
	pf = NULL;
}
void showclass(LTNode* class)
{
again:;
	int j;
	if (!pass->a)
	{
		printf("�ް༶���봴���༶\n");
		creatclass(class);
		return;
	}
	printf("��ѡ����Ҫ�鿴�ĸ��༶������%d���༶:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
	   printf("������Ϸ�����\n");
	   goto again;
	}
		
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("�༶����ѧ��");
		return;
	}
	showstu(head);
}
void showstu(LTNode* head)
{
	int count = 1;
	LTNode* cur = head->next;
	while (cur != head)
	{
		printf("%d", count++);
		printstu(cur);
		cur = cur->next;
	}
}
void printstu(LTNode* Data)
{
	assert(Data);
	printf("-------------------------------------------------------------------------------------\n");
	printf("|���֣�%s | ", Data->Data->name);
	printf("�Ա�%s | ", Data->Data->sex);
	printf("ѧ�ţ�%s | ", Data->Data->id);
	printf("C���Գɼ���%d | ", Data->Data->cpp);
	printf("��ѧ�ɼ���%d | ", Data->Data->math);
	printf("Ӣ��ɼ���%d | ", Data->Data->english);
	printf("ƽ���ɼ���%d |\n", Data->Data->average);
	printf("--------------------------------------------------------------------------------------\n");
}
void backmenu()
{
	puts("���س������ز˵�");
	scanf("%c");
	getchar();
}
void savestu(LTNode* class)
{
	assert(class);
	FILE* pf = fopen("class.txt", "wb");
	int count = pass->a;
	LTNode* cur = class;
	if (NULL == pf)
	{
		perror("fopen");
		return;
	}
	while (count--)
	{
		cur = cur->next;
		LTNode* tail = cur->classs;
		fwrite(tail, sizeof(LTNode), 1, pf);
		tail = cur->classs->next;
		while (tail != cur->classs)
		{

			fwrite(tail->Data, sizeof(stu), 1, pf);
			tail = tail->next;
		}
	}
	fclose(pf);
	pf = NULL;
	savepass();
}
void loadstu(LTNode* class)
{
	assert(class);
	FILE* pf = fopen("class.txt", "rb");
	int count = pass->a;
	LTNode* cur = class;
	stu tmp = { 0 };
	if (NULL == pf)
	{
		perror("fopen");
		return;
	}
	while (count--)
	{
		cur = cur->next;
		LTNode tmp_1 = { 0 };
		fread(&tmp_1, sizeof(LTNode), 1, pf);
		int count_1 = tmp_1.size;
		LTNode* tail = cur->classs;
		cur->classs->size = count_1;
		while (count_1--)
		{
			stu* tmp = (stu*)malloc(sizeof(stu));
			fread(tmp, sizeof(stu), 1, pf);
			ListPushBack(tail,tmp);
		}
	}
	fclose(pf);
	pf = NULL;
	average(class);
}
LTNode* search(LTNode* class)
{
again:;
	assert(class);
	int j,input;
	stu* date;
	if (!pass->a)
	{
		puts("�ް༶");
		return;
	}
	printf("��ѡ����Ҫ�����Ǹ��༶������%d���༶:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("������Ϸ�����\n");
		goto again;
	}
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("�༶����ѧ��");
		return;
	}
	stu* tmp = (stu*)malloc(sizeof(stu));
again_:;
	showstu(head);
	printf("\n1������ѧ��        2����������     ��");
	scanf("%d", &input);
	if (1 == input)
	{
		printf("\n��������Ϣ��");
		scanf("%s", tmp->id);
		tmp->flag = true;
		if (!searchstu(head, tmp))
		{
			puts("���޴���");
			return NULL;
		}
		printstu(searchstu(head, tmp));
		date = searchstu(head, tmp);
	}
	else if (2 == input)
	{
		printf("\n��������Ϣ��");
		scanf("%s", tmp->name);
		tmp->flag = false;
		if (!searchstu(head, tmp))
		{
			puts("���޴���");
			return NULL;
		}
		printstu(searchstu(head, tmp));
		date = searchstu(head, tmp);
	}
	else
	{
		puts("������Ϸ�����");
		Sleep(1000);
		system("cls");
		goto again_;
	}
	free(tmp);
	tmp = NULL;
	return date;
}
LTNode* searchstu(LTNode* class, stu* data)
{
	assert(class);
	LTNode* cur = class->next;
	if (data->flag)
	{
		while (cur != class)
		{
			if (!strcmp(cur->Data->id,data->id))
			{
				return cur;
			}
			cur = cur->next;
		}
	}
	else
	{
		while (cur != class)
		{
			if (!strcmp(cur->Data->name, data->name))
				return cur;
			cur = cur->next;
		}
	}
	return NULL;
}
void modfiy(LTNode* class)
{
	assert(class);
	LTNode* stu = search(class);
	if (!stu)
		return;
	puts("--------------------------------------------------------------------");
	printf("����������:");
	scanf("%s", stu->Data->name);
	printf("\n�������Ա�:");
	scanf("%s", stu->Data->sex);
	printf("\n������ѧ��:");
	scanf("%s", stu->Data->id);
	printf("\n��������ѧ�ɼ�:");
	scanf("%d", &stu->Data->math);
	printf("\n������C���Գɼ�:");
	scanf("%d", &stu->Data->cpp);
	printf("\n������Ӣ��ɼ�:");
	scanf("%d", &stu->Data->english);
	puts("--------------------------------------------------------------------\n");
}
void sortclass(LTNode* class)
{
again:;
	int j;
	if (!pass->a)
	{
		puts("�ް༶");
		return;
	}
	printf("��ѡ����Ҫ�����ĸ��༶������%d���༶:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("������Ϸ�����\n");
		goto again;
	}
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("�༶����ѧ��");
		return;
	}
	my_sort(head);
	showstu(head);
}
void my_sort(LTNode* head)
{
	if (head == NULL || head->next == head)
		return; // ����Ϊ�ջ�ֻ��һ���ڵ㣬��������
	int swapped;
	LTNode* current;
	LTNode* tail = NULL;
	do {
		swapped = 0;
		current = head->next;
		while (current->next != head && current!=head) 
		{
			stu* data1 = current->Data;
			stu* data2 = current->next->Data;

			// ���ݽṹ�����ݰ����ֶν��бȽ�
			if (data1->average > data2->average) {
				// �����ڵ�λ��
				LTNode* temp = current->next;
				current->next = temp->next;
				temp->next->prev = current;
				temp->prev = current->prev;
				current->prev->next = temp;
				current->prev = temp;
				temp->next = current;
				swapped = 1;
			}
			current = current->next;
		}
		tail = current;
	} while (swapped);
}
void average(LTNode* class)
{
	assert(class);
	LTNode* cur = class->next;
	while (cur != class)
	{
		LTNode* tail = cur->classs->next;
		while (tail != cur->classs)
		{
			tail->Data->average = (tail->Data->cpp + tail->Data->english + tail->Data->math) / 3;
			tail = tail->next;
		}
		cur = cur->next;
	}
}
void delstu(LTNode* class)
{
	assert(class);
	ListErase(search(class));
}
void destroyall(LTNode* class)
{
	LTNode* cur = class->next;
	while (cur != class)
	{
		LTNode* tail = cur->classs->next;
		while (tail!= cur->classs)
		{
			LTNode* tail_ = tail;
			tail = tail->next;
			ListErase(tail_);
			
		}
		LTNode* cur_ = cur;
		cur = cur->next;
		ListErase(cur_);
	}
	pass->a = 0;
}







