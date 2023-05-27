#include "student.h"

//˫���ͷѭ������ĳ�ʼ��
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));//����ͷ���
	phead->next = phead;//���ָ��ָ��ͷ
	phead->prev = phead;//ǰ��ָ��ָ��ͷ
	return phead;
}

//˫���ͷѭ������Ĵ�ӡ
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

//���ݺ���
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

//˫���ͷѭ�������β��
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

//˫���ͷѭ�������βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	free(tail);
	tailprev->next = phead;
	phead->prev = tailprev;
	//ListErase(phead->prev);//βɾ���൱�ڸ���Erase�������
}

//˫���ͷѭ�������ͷ��
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

//˫���ͷѭ�������ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* next = phead->next;
	LTNode* nextNext = next->next;
	phead->next = next->next;
	nextNext->prev = phead;
}

//˫���ͷѭ������Ĳ���
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

//˫���ͷѭ������posλ��֮ǰ����
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

//˫���ͷѭ������posλ��ɾ��
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

//˫���ͷѭ�����������
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