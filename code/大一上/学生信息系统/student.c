#include"student.h"
void menu()
{
	printf("------学生信息管理系统V2.0--------\n");
	printf("*       1. 创建班级				*\n");
	printf("*       2. 学生信息录入			*\n");
	printf("*       3. 学生信息删除			*\n");
	printf("*       4. 学生信息查找			*\n");
	printf("*       4. 学生信息修改			*\n");
	printf("*       5. 学生信息显示			*\n");
	printf("*       6. 学生信息排序			*\n");
	printf("*       0. 退出系统				*\n");
	printf("----------------------------------\n");
	printf("*  作者：贾天元，学号：2022401760219  *\n");
	printf("----------------------------------\n");
}
void password(void)
{
	char pass[200] = {0},ans[]="jty";
	int count = 3;
	printf("请输入密码：\n");
	scanf("%s", pass);
	while (--count)
	{
		 
		if (!strcmp(pass, ans))
		{
			printf("密码正确\n");
			Sleep(1000);
			break;
		}
		else
		{	
			printf("你还有%d次机会\n",count);
			printf("请输入密码：\n");
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
	  printf("请输入你要创建几个班级\n");
	  scanf("%d", &a); 
	  class->size = a;
	  for (int i = 0; i < a; i++)
	  {
		  ListPushBack(class, NULL);
	  }
	}
	else
	{
		printf("请输入你要扩建到多少个班级\n");
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
	printf("请选择你要管理那个班级，已有%d个班级\n", a);
	scanf("%d", &j);

}
stu* scanstu()
{
	stu* date = (stu*)malloc(sizeof(stu));

	return date;
}







