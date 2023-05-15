#include"student.h"
void menu()
{
	printf("*****************************************\n");
	printf("****** 1. add           2. del    *******\n");
	printf("****** 3. search        4. modify *******\n");
	printf("****** 5. show          6. sort   *******\n");
	printf("****** 0. exit                    *******\n");
	printf("*****************************************\n");
}
void add(slist** head)
{
	int input;
	slist* move = *head;
	printf("请输入要录入的学生个数\n");
	scanf("%d", &input);
	do
	{
		if (move == NULL)
		{
			*head = slistmalloc();
			move = *head;
			scanlist(&move);
		}
		else
		{
			move = *head;
			move = findby(*head);
			move->next = slistmalloc();
			move = move->next;
			scanlist(&move);
		}
		Sleep(1000);
		input--;
	} while (input);
}
slist* slistmalloc()
{
	slist* plist = (slist*)malloc(1 * sizeof(slist));
	stu* pstu = (stu*)malloc(1 * sizeof(stu));
	plist->stu_ = pstu;
	plist->next = NULL;
	return plist;
}
int pjs(slist* move)
{
	Sleep(1000);
	int a = (move->stu_->cpp + move->stu_->english + move->stu_->math) / 3;
	return a;
}
slist* findby(slist* move)
{
	while (move)
	{
		if (move->next == NULL)
			return move;
		move = move->next;
	}
}
void showlist(slist** head)
{
	slist* move = *head;
	while (move)
	{
		printslist(move);
		move = move->next;
	}
}
void printslist(slist* move)
{
	printf("%s", move->stu_->name);
	Sleep(1000);
}
void delslist(slist** head)
{	
	assert(*head);
	slist* move=*head;
	char name[name_max]; 
	printf("请输入你要删除的学生名字\n");
	scanf("%s", name);
	if (!strcmp(move->stu_->name, name))
	{
		slist* tmp = move;
		*head = (*head)->next;
		free(tmp->stu_);
		free(tmp);
		printf("删除成功\n");
		return;
	}
	move=searchlist(*head,name);
	if (move == NULL)
	{
		printf("查无此人\n请重新输入\n");
		return;
	}
	
	slist* tmp = move->next;
	move->next = move->next->next;
	free(tmp->stu_);
	free(tmp);
}
slist* searchlist(slist* move,char* name)
{
	assert(move);
	while (move)
	{
		if (!strcmp(name, move->next->stu_->name))
			return move;
		move = move->next;
	}
	return NULL;
}
void mdflist(slist** head)
{
	assert(*head);
	slist* move = *head;
	char name[name_max];
	printf("请输入你要修改信息的学生名字\n");
	scanf("%s", name);
	move = searchlist(*head, name);
	if (!strcmp(move->stu_->name, name))
	{
		scanlist(&move);
		return;
	}
	if (move == NULL)
	{
		printf("查无此人\n请重新输入\n");
		return;
	}
	move = move->next;
	scanlist(&move);
	return;
}
void scanlist(slist** head)
{
	assert(*head);
	slist* move = *head;
	/*	printf("请输入学生的ID：\n");
		scanf("%s", &((move)->stu_->id));*/
	printf("请输入学生的姓名：\n");
	scanf("%s", (move)->stu_->name);
	/*printf("请输入学生的性别：\n");
	scanf("%s", &((move)->stu_->sex));
	printf("请输入学生的数学成绩：\n");
	scanf("%d", &((move)->stu_->math));
	printf("请输入学生的英语成绩：\n");
	scanf("%d", &((move)->stu_->english));
	printf("请输入学生的编程成绩：\n");
	scanf("%d", &((move)->stu_->cpp));
	printf("该同学的平均分为：%d\n", pjs(move));
	move->stu_->average = pjs(move);*/
	return;
}
void listsort(slist** head)
{
	assert(*head);
	slist* move = *head;
	int a;
	printf("<请输入你以何种方式排序>");
	printf("\n1.姓名 2.学号\n");
	scanf("%d", &a);
	if (1 == a)
	{
		my_qsort(&move, stu_cmp_name);
	}
	else if (2 == a)
	{
		my_qsort(&move, stu_cmp_age);
	}
	else
	{
		printf("输入错误");
		return;
	}
}
int stu_cmp_name(const stu* e1,const stu* e2)
{
	return *(char*)(e1->name) - *(char*)(e2->name);
}
int stu_cmp_age(const stu* e1, const stu* e2)
{
	return *(char*)(e1->id) - *(char*)(e2->id);
}
void my_qsort(slist** head, int (*cmp)(stu* e1, stu* e2))
{
	slist* move = *head;
	stu* tmp;
	int count = 0,count_1=0,i=0;
	while (move)
	{
		move = move->next;
		count++;
	}
	count--;
	while (count)
	{
		move = *head;
		count_1 = count;
		while (count_1-i)
		{
			if (cmp(move->stu_, move->next->stu_)>=0)
			{
				tmp = move->stu_;
				move->stu_ = move->next->stu_;
				move->next->stu_ = tmp;
			}
			move = move->next;
			count_1--;
		}
		i++;
		count--;
	}
}









