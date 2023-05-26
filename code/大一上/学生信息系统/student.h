#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>


#define name_max 20
#define sex_max 20
#define id_max 20


typedef struct student {
	char name[name_max];
	char sex[sex_max];
	char id[id_max];
	int math;
	int cpp;
	int english;
	int average;
}stu;

void menu();
void password(void);
typedef int LTDataType;
typedef struct ListNode
{
	stu* Data;
	struct ListNode* classs;
	int size;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;
//双向带头循环链表的初始化
LTNode* ListInit();
//双向带头循环链表的打印
void ListPrint(LTNode* phead);
//增容函数
LTNode* BuyListNode(stu* x);
//双向带头循环链表的尾插
void ListPushBack(LTNode* phead, stu* x);
//双向带头循环链表的尾删
void ListPopBack(LTNode* phead);
//双向带头循环链表的头插
void ListPushFront(LTNode* phead, LTDataType x);
//双向带头循环链表的头删
void ListPopFront(LTNode* phead);
//双向带头循环链表的查找
LTNode* ListFind(LTNode* phead, LTDataType x);
//双向带头循环链表pos位置之前插入
void ListInsert(LTNode* pos, LTDataType x);
//双向带头循环链表pos位置删除
void ListErase(LTNode* pos);
//双向带头循环链表的销毁
void ListDestroy(LTNode* phead);
void initclass(LTNode** phead);
LTNode* creatclass(LTNode* head);
void stuadd(LTNode* class);
scanclass
