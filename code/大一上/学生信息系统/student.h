#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<stdbool.h>
#define name_max 20
#define sex_max 20
#define id_max 20
#define pass_max 20
typedef struct student {
	char name[name_max];
	char sex[sex_max];
	char id[id_max];
	int math;
	int cpp;
	int english;
	int average;
	bool flag;
}stu;
typedef struct pass__ {
	int a;
	char pass[pass_max];
	bool flag;
}passw;
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
LTNode* ListInit(void);
void ListPrint(LTNode* phead);
LTNode* BuyListNode(stu* x);
void ListPushBack(LTNode* phead, stu* x);
void ListPopBack(LTNode* phead);
void ListPushFront(LTNode* phead, LTDataType x);
void ListPopFront(LTNode* phead);
LTNode* ListFind(LTNode* phead, LTDataType x);
void ListInsert(LTNode* pos, LTDataType x);
void ListErase(LTNode* pos);
void ListDestroy(LTNode* phead);
void initclass(LTNode** phead);
void creatclass(LTNode* head);
void stuadd(LTNode* class);
stu* scanstu(void);
LTNode* manegeclass(LTNode* class,int j);
void loadpass(void);
void savepass(void);
void showclass(LTNode* class);
void showstu(LTNode* head);
void printstu(stu* Data);
void backmenu(void);
void savestu(LTNode* class);
void loadstu(LTNode* class);
LTNode* search(LTNode* class);
LTNode* searchstu(LTNode* class,stu* data);
void modfiy(LTNode* class);
void sortclass(LTNode* class);
void delstu(LTNode* class);
void average(LTNode* class);
void my_sort(LTNode* head);

void destroyall(LTNode* class);