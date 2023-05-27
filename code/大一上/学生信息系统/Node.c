#include "student.h"

//双向带头循环链表的初始化
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));//创建头结点
	phead->next = phead;//后继指针指向头
	phead->prev = phead;//前驱指针指向头
	return phead;
}

//双向带头循环链表的打印
void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->Data);
		cur = cur->next;
	}
	printf("\n");
}

//增容函数
LTNode* BuyListNode(stu* x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->Data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

//双向带头循环链表的尾插
void ListPushBack(LTNode* phead,stu* x)
{
	assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

//双向带头循环链表的尾删
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	free(tail);
	tailprev->next = phead;
	phead->prev = tailprev;
	//ListErase(phead->prev);//尾删就相当于复用Erase这个函数
}

//双向带头循环链表的头插
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
	//ListInsert(phead->next, x);
}

//双向带头循环链表的头删
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* next = phead->next;
	LTNode* nextNext = next->next;
	phead->next = next->next;
	nextNext->prev = phead;
}

//双向带头循环链表的查找
LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->Data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//双向带头循环链表pos位置之前插入
void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

//双向带头循环链表pos位置删除
void ListErase(LTNode* pos)
{
	if (!pos)
		return;
	LTNode* cur = pos->next;
	while (1)
	{
		if (cur->size < -1010)
			cur = cur->next;
		else
		{
			cur->size--;
			break;
		}
	}
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos->Data);
	pos->Data = NULL;
	free(pos);
	pos = NULL;
}

//双向带头循环链表的销毁
void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}