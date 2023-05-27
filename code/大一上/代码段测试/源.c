#define _CRT_SECURE_NO_WARNINGS 1
#define name_max 20
#define sex_max 20
#define id_max 20
#define pass_max 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<stdbool.h>
typedef struct student {
	char name[name_max];
	char sex[sex_max];
	char id[id_max];
	int math;
	int cpp;
	int english;
	int average;
}stu;
typedef int LTDataType;
typedef struct ListNode
{
	stu* Data;
	struct ListNode* classs;
	int size;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;
void fun()
{
	printf("----------------------------------------------------------------------------\n");
	printf("|名字：%s | ", "ad"/*cur->Data->name*/);
	printf("性别：%s | ", "ad"/*cur->Data->sex*/);
	printf("学号：%s | ", "ad"/*cur->Data->id*/);
	printf("C语言成绩：%d | ", 2/*cur->Data->cpp*/);
	printf("数学成绩：%d | ", 2/*cur->Data->math*/);
	printf("英语成绩：%d |\n", 2/*cur->Data->english*/);
	printf("----------------------------------------------------------------------------\n");
}
int main()
{
	LTNode* cur = (LTNode*)malloc(sizeof(LTNode));
	fun();
	fun();
	fun();
	fun();

	return 0;
}
