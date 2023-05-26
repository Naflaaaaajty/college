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
//˫���ͷѭ������ĳ�ʼ��
LTNode* ListInit();
//˫���ͷѭ������Ĵ�ӡ
void ListPrint(LTNode* phead);
//���ݺ���
LTNode* BuyListNode(stu* x);
//˫���ͷѭ�������β��
void ListPushBack(LTNode* phead, stu* x);
//˫���ͷѭ�������βɾ
void ListPopBack(LTNode* phead);
//˫���ͷѭ�������ͷ��
void ListPushFront(LTNode* phead, LTDataType x);
//˫���ͷѭ�������ͷɾ
void ListPopFront(LTNode* phead);
//˫���ͷѭ������Ĳ���
LTNode* ListFind(LTNode* phead, LTDataType x);
//˫���ͷѭ������posλ��֮ǰ����
void ListInsert(LTNode* pos, LTDataType x);
//˫���ͷѭ������posλ��ɾ��
void ListErase(LTNode* pos);
//˫���ͷѭ�����������
void ListDestroy(LTNode* phead);
void initclass(LTNode** phead);
LTNode* creatclass(LTNode* head);
void stuadd(LTNode* class);
scanclass
