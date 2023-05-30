#include"student.h"
passw* pass;
void menu()
{
	printf("------学生信息管理系统V2.0-----------\n");
	printf("*       1. 创建班级		    *\n");
	printf("*       2. 学生信息录入		    *\n");
	printf("*       3. 学生信息删除		    *\n");
	printf("*       4. 学生信息查找	   	    *\n");
	printf("*       5. 学生信息修改		    *\n");
	printf("*       6. 学生信息显示		    *\n");
	printf("*       7. 学生信息排序		    *\n");
	printf("*       8. 重置学生信息管理系统	    *\n");
	printf("*       0. 退出系统		    *\n");
	printf("-------------------------------------\n");
	printf("*  作者：贾天元 学号:2022401760219  *\n");
	printf("-------------------------------------\n");
}
void password(void)
{
	char pass_[200] = {0};
	int count = 3;
	if (pass->flag)
	{
		printf("您还未注册\n请输入注册密码(密码最多为18位)：\n");
		scanf("%s", pass->pass);
		pass->a = 0;
		pass->flag = false;
	}
	else
	{
		printf("请输入密码：");
		scanf("%s", pass_);
		while (--count)
		{
			if (!strcmp(pass_, pass->pass))
			{
				printf("密码正确\n");
				Sleep(1000);
				break;
			}
			else
			{
				printf("你还有%d次机会\n", count);
				printf("请输入密码：\n");
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
	  printf("请输入你要创建几个班级\n");
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
		printf("请输入你要扩建到多少个班级(已有%d个班级)：",pass->a);
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
		puts("无班级");
		return;
	}
	printf("请选择你要管理那个班级，已有%d个班级", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("请输入合法数字\n");
		goto again;
	}
	LTNode* head=manegeclass(class,j);
	printf("请输入你要存入多少学生信息：");
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
	printf("请输入名字:");
	scanf("%s", date->name);
	printf("\n请输入性别:");
	scanf("%s", date->sex);
	printf("\n请输入学号:");
	scanf("%s", date->id);
	printf("\n请输入数学成绩:");
	scanf("%d", &date->math);
	printf("\n请输入C语言成绩:");
	scanf("%d", &date->cpp);
	printf("\n请输入英语成绩:");
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
		printf("无班级，请创建班级\n");
		creatclass(class);
		return;
	}
	printf("请选择你要查看哪个班级，已有%d个班级:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
	   printf("请输入合法数字\n");
	   goto again;
	}
		
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("班级内无学生");
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
	printf("|名字：%s | ", Data->Data->name);
	printf("性别：%s | ", Data->Data->sex);
	printf("学号：%s | ", Data->Data->id);
	printf("C语言成绩：%d | ", Data->Data->cpp);
	printf("数学成绩：%d | ", Data->Data->math);
	printf("英语成绩：%d | ", Data->Data->english);
	printf("平均成绩：%d |\n", Data->Data->average);
	printf("--------------------------------------------------------------------------------------\n");
}
void backmenu()
{
	puts("按回车键返回菜单");
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
		puts("无班级");
		return;
	}
	printf("请选择你要管理那个班级，已有%d个班级:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("请输入合法数字\n");
		goto again;
	}
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("班级内无学生");
		return;
	}
	stu* tmp = (stu*)malloc(sizeof(stu));
again_:;
	showstu(head);
	printf("\n1）按照学号        2）按照姓名     ：");
	scanf("%d", &input);
	if (1 == input)
	{
		printf("\n请输入信息：");
		scanf("%s", tmp->id);
		tmp->flag = true;
		if (!searchstu(head, tmp))
		{
			puts("查无此人");
			return NULL;
		}
		printstu(searchstu(head, tmp));
		date = searchstu(head, tmp);
	}
	else if (2 == input)
	{
		printf("\n请输入信息：");
		scanf("%s", tmp->name);
		tmp->flag = false;
		if (!searchstu(head, tmp))
		{
			puts("查无此人");
			return NULL;
		}
		printstu(searchstu(head, tmp));
		date = searchstu(head, tmp);
	}
	else
	{
		puts("请输入合法数字");
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
	printf("请输入名字:");
	scanf("%s", stu->Data->name);
	printf("\n请输入性别:");
	scanf("%s", stu->Data->sex);
	printf("\n请输入学号:");
	scanf("%s", stu->Data->id);
	printf("\n请输入数学成绩:");
	scanf("%d", &stu->Data->math);
	printf("\n请输入C语言成绩:");
	scanf("%d", &stu->Data->cpp);
	printf("\n请输入英语成绩:");
	scanf("%d", &stu->Data->english);
	puts("--------------------------------------------------------------------\n");
}
void sortclass(LTNode* class)
{
again:;
	int j;
	if (!pass->a)
	{
		puts("无班级");
		return;
	}
	printf("请选择你要排序哪个班级，已有%d个班级:", pass->a);
	scanf("%d", &j);
	if (j > pass->a)
	{
		printf("请输入合法数字\n");
		goto again;
	}
	LTNode* head = manegeclass(class, j);
	if (!head->size)
	{
		puts("班级内无学生");
		return;
	}
	my_sort(head);
	showstu(head);
}
void my_sort(LTNode* head)
{
	if (head == NULL || head->next == head)
		return; // 链表为空或只有一个节点，无需排序
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

			// 根据结构体数据包的字段进行比较
			if (data1->average > data2->average) {
				// 交换节点位置
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







