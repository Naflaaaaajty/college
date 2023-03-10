#include"contact.h"
void menu()
{
	printf("*****************************************\n");
	printf("****** 1. add           2. del    *******\n");
	printf("****** 3. search        4. modify *******\n");
	printf("****** 5. show          6. sort   *******\n");
	printf("****** 0. exit                    *******\n");
	printf("*****************************************\n");
}
void InitContact(con* txl) {
	assert(txl);
	txl->count = 0;
	con* ptr = (con*)calloc(max, sizeof(contact));
	if (ptr == NULL)
	{
		printf("InitContact;;calloc");
		return;
	}
	txl->arr = ptr;
	txl->count_max = max;
	loadcontact(txl);
}
void check_txl(con* txl)
{
	if (txl->count == txl->count_max)
	{
		con* pa = (con*)realloc(txl->arr,( txl->count_max+max) * sizeof(contact));
		if (NULL == pa)
		{
			printf("realloc::pa");
			return;
		}
		txl->arr = pa;
		txl->count_max += max;
		//printf("bingo");
	}
}
void addcontact(con* txl)
{
	assert(txl);
	check_txl(txl);
	printf("��������ϵ������>\n");
	scanf("%s", txl->arr[txl->count].name);
	printf("��������ϵ������>\n");
	scanf("%d", &(txl->arr[txl->count].age));
	printf("��������ϵ�˵绰>\n");
	scanf("%s" , txl->arr[txl->count].tel);
	printf("��������ϵ���Ա�>\n");
	scanf("%s", txl->arr[txl->count].sex);
	printf("��������ϵ�˵�ַ>\n");
	scanf("%s", txl->arr[txl->count].adder);
	(txl->count)++;
	printf("��ӳɹ�");
	Sleep(1000);
}
void show(con* txl)
{
	int  a=1;
	assert(txl);
	printf("%-20s\t%-3s\t%-12s\t%-6s\t%-20s\t\n", "����", "����", "�绰", "�Ա�", "��ַ");
	for (int i=0; i < txl->count; i++) 
	{
	printf("%-20s\t", txl->arr[i].name);
	printf("%-3d\t", txl->arr[i].age);
	printf("%-12s\t", txl->arr[i].tel);
	printf("%-6s\t", txl->arr[i].sex);
	printf("%-20s\t\n", txl->arr[i].adder);
	}
	while (a)
	{
		printf("������1������ҳ��>");
		scanf("%d", &a);
		if (1 == a)
			return;
		else
			printf("�����������������");
	}
}
int serch(const con* txl,char name[])
{
	assert(txl);
	for (int i = 0; i < txl->count; i++)
	{
		if (0 == strcmp(txl->arr[i].name, name))
			return i;
	}
	return -1;
}
void serchrtxl(const con* txl)
{
	assert(txl);
	char name[name_max] = { 0 };
	printf("��������Ҫ���ҵ���ϵ��>\n");
	scanf("%s", name);
	if (-1 == serch(txl, name))
		printf("���޴���\n");
	else
	{
		int i = serch(txl, name);
		printf("%-20s\t%-3s\t%-12s\t%-6s\t%-20s\t\n", "����", "����", "�绰", "�Ա�", "��ַ");
		printf("%-20s\t", txl->arr[i].name);
		printf("%-3d\t", txl->arr[i].age);
		printf("%-12s\t", txl->arr[i].tel);
		printf("%-6s\t", txl->arr[i].sex);
		printf("%-20s\t\n", txl->arr[i].adder);
	}
	Sleep(1000);
}
void deltxl(con* txl) 
{
	assert(txl);

	if (0 == txl->count)
	{
		printf("ͨѶ¼��û����ϵ��");
		return;
	}
	char name[name_max] = { 0 };
	printf("��������Ҫɾ������ϵ��>");
	scanf("%s", name);
	if (-1 == serch(txl, name)) 
	{
		printf("���޴���\n");
		return;
	}	
	int i= serch(txl, name);
	txl->arr[i] = txl->arr[txl->count-1];
	txl->count--;
}
void modifytxl(con* txl)
{
	assert(txl);
	char name[name_max];
	printf("����������Ҫ�޸ĵ���ϵ������>");
	scanf("%s", name);
	if (-1 == serch(txl, name))
		printf("���޴���\n");
	int i = serch(txl, name);
	printf("��������ϵ������>\n");
	scanf("%s", txl->arr[i].name);
	printf("��������ϵ������>\n");
	scanf("%d", &(txl->arr[i].age));
	printf("��������ϵ�˵绰>\n");
	scanf("%s", txl->arr[i].tel);
	printf("��������ϵ���Ա�>\n");
	scanf("%s", txl->arr[i].sex);
	printf("��������ϵ�˵�ַ>\n");
	scanf("%s", txl->arr[i].adder);
	printf("�޸ĳɹ�");
	Sleep(1000);
}
void txlsort(const con* txl)
{
	int a;
	assert(txl);
	again:
	printf("<���������Ժ��ַ�ʽ����>");
	printf("\n1.���� 2.����\n");
	scanf("%d", &a);
	if (1 == a)
	{
		qsort(txl->arr,txl->count,sizeof(txl->arr[0]),txl_cmp_name);
	}
	else if (2 == a)
	{
		qsort(txl->arr, txl->count, sizeof(txl->arr[0]), txl_cmp_age);
	}
	else
	{
		printf("�������");
		goto again;
	}
}
int txl_cmp_age(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int txl_cmp_name(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
void loadcontact(con* txl)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf)
	{
		perror("fopen");
		return;
	}
	contact tmp = { 0 };
	int i = 0;
	while (fread(&tmp, sizeof(contact), 1, pf))
	{
		check_txl(txl);
		txl->arr[i] = tmp;
		txl->count++;
		i++;
	} 
	fclose(pf);
	pf = NULL;
	
}
void destroy(con* txl)
{
	free(txl->arr);
	txl->arr = NULL;
	txl->count = 0;
	txl->count_max = 0;
	txl = NULL;

}
void savecontact(con* txl)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("fopen");
		return;
	}
	contact tmp = { 0 };
	int i = 0;
	for (i = 0; i < txl->count; i++)
	{
		fwrite(txl->arr + i, sizeof(contact), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("\n����ɹ�");
}


