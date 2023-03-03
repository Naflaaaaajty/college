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
	memset(txl->arr, 0, sizeof(txl->arr));
}
void addcontact(con* txl)
{
	assert(txl);
	printf("请输入联系人姓名>\n");
	scanf("%s", txl->arr[txl->count].name);
	printf("请输入联系人年龄>\n");
	scanf("%d", &(txl->arr[txl->count].age));
	printf("请输入联系人电话>\n");
	scanf("%s" , txl->arr[txl->count].tel);
	printf("请输入联系人性别>\n");
	scanf("%s", txl->arr[txl->count].sex);
	printf("请输入联系人地址>\n");
	scanf("%s", txl->arr[txl->count].adder);
	(txl->count)++;
	printf("添加成功");
	Sleep(1000);

}
void show(con* txl)
{
	int  a=1;
	assert(txl);
	printf("%-20s\t%-3s\t%-12s\t%-6s\t%-20s\t\n", "姓名", "年龄", "电话", "性别", "地址");
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
		printf("请输入1返回主页面>");
		scanf("%d", &a);
		if (1 == a)
			return;
		else
			printf("输入错误请重新输入");
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
	printf("请输入需要查找的联系人>\n");
	scanf("%s", name);
	if (-1 == serch(txl, name))
		printf("查无此人\n");
	else
	{
		int i = serch(txl, name);
		printf("%-20s\t%-3s\t%-12s\t%-6s\t%-20s\t\n", "姓名", "年龄", "电话", "性别", "地址");
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
		printf("通讯录中没有联系人");
		return;
	}
	char name[name_max] = { 0 };
	printf("请输入你要删除的联系人>");
	scanf("%s", name);
	if (-1 == serch(txl, name)) 
	{
		printf("查无此人\n");
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
	printf("请输入你需要修改的联系人名字>");
	scanf("%s", name);
	if (-1 == serch(txl, name))
		printf("查无此人\n");
	int i = serch(txl, name);
	printf("请输入联系人姓名>\n");
	scanf("%s", txl->arr[i].name);
	printf("请输入联系人年龄>\n");
	scanf("%d", &(txl->arr[i].age));
	printf("请输入联系人电话>\n");
	scanf("%s", txl->arr[i].tel);
	printf("请输入联系人性别>\n");
	scanf("%s", txl->arr[i].sex);
	printf("请输入联系人地址>\n");
	scanf("%s", txl->arr[i].adder);
	printf("修改成功");
	Sleep(1000);

}
void txlsort(const con* txl)
{
	int a;
	assert(txl);
	again:
	printf("<请输入你以何种方式排序>");
	printf("\n1.姓名 2.年龄\n");
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
		printf("输入错误");
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

