#ifndef _DCLIST_H_
#define _DCLIST_H_
#include"common.h"

typedef struct DCListNode
{
	DataType data;
	struct DCListNode *prev;
	struct DCListNode *next;
}DCListNode;

typedef struct DCList
{
	DCListNode *first;
	DCListNode *last;
	size_t      size;

}DCList;
DCListNode* _Buynode(DataType x)//创建节点
{
	DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	s->prev = NULL;
	return s;
}



void DCListInit(DCList* plist);//初始循环双链表
void DCListPushBack(DCList* plist, DataType item);//尾插
void DCListPushFront(DCList* plist, DataType item);//头插
void DCListShow(DCList* plist);//显示链表
DCListNode* DCListFindByVal(DCList* plist, DataType key);//查找数据
bool DCListInsertByVal(DCList* plist, DataType x);//按升序插入数据
bool DCListEraseByVal(DCList* plist, DataType x);//删除数据
int DCListLength(DCList* plist);//求长度

void DCListReverse(DCList* plist);//逆转




/////////////////////////////////////////////////
void DCListInit(DCList* plist)//初始循环双链表
{
	DCList *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->first->prev = plist->last;
	plist->last->next = plist->last;
	plist->size = 0;
}
void DCListPushBack(DCList* plist, DataType x)//尾插
{
	assert(plist != NULL);
	DCListNode *s = _Buynode(x);
	plist->last->next = s;
	s->prev = plist->last;
	plist->last = s;
	plist->last->next = plist->first;
	plist->first->prev = plist->last;
	plist->size++;
}
void DCListPushFront(DCList* plist, DataType x)//头插
{
	assert(plist != NULL);
	DCListNode *s = _Buynode(x);
	s->next = plist->first->next;
	s->next->prev = s;
	s->prev = plist->first;
	plist->first->next = s;
	if (plist->size == 0)
	{
		plist->last = s;
	}
	plist->size++;
}
void DCListShow(DCList* plist)//显示链表
{
	assert(plist != NULL);
	DCListNode *p = plist->first->next;
	while (p != plist->first)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("Over.\n");
}
DCListNode* DCListFindByVal(DCList* plist, DataType key)//查找数据
{
	assert(plist != NULL);
	DCListNode *p = plist->first->next;
	while (p != plist->first && p->data != key)
		p = p->next;
	return p;
}
bool DCListInsertByVal(DCList* plist, DataType x)//按升序插入数据
{
	assert(plist != NULL);
	DCListNode *p = _Buynode(x);
	DCListNode *q = plist->first->next;
	while (q != plist->first && q->next->data<x)
		q = q->next;
		if (p == plist->first)
			plist->last = p;
		else
		{
			p->next = q->next;
			p->prev = q;
			q->next->prev = p;
			q->next = p;
		}
		q = q->next;
		plist->size++;
	
	return true;
}
bool DCListEraseByVal(DCList* plist, DataType x)//删除数据
{
	assert(plist != NULL);
	DCListNode *p = plist->first;
	DCListNode *s = DCListFindByVal(plist, x);
	if (s = NULL)
		return false;
	while (p->next != s)
	{
        p = p->next;
	}
		
	if (s == plist->last)
		plist->last = p;
	else
	{
        p->next = s->next;
		s->next->prev = p;
	}
	free(s);
	plist->size--;
	return true;
}
int DCListLength(DCList* plist)//求长度
{
	assert(plist != NULL);
	return plist->size;
}
void DCListReverse(DCList* plist)//逆转
{
	DCListNode *p, *q;
	p = plist->first->next;
	q = p->next;
	plist->last = p;
	plist->last->next = plist->first;
	plist->first->prev = plist->last;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		p->next = plist->first->next;
		p->prev = plist->first;
		plist->first->next = p;
		p->prev = p;
	}
}




#endif 