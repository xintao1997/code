#ifndef _SLIST_H
#define _SLIST_H

#include"common.h"

typedef struct SListNode
{
	DataType data;
	struct SListNode *next;
}SListNode;

typedef struct SList
{
	SListNode *first;
	SListNode *last;
	size_t     size;
}SList;

SListNode* _Buynode(DataType x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	return s;
}
void SListInit(SList* plist);//初始化链表
void SListPushBack(SList* plist, int x);//尾插
void SListShow(SList* plist);//显示链表
void SListPushFront(SList* plist, int x);//头插
SListNode* SListFindByVal(SList* plist, int key);//查找数据
bool SListInsertByVal(SList* plist, int x);//插入数据
bool SListEraseByVal(SList* plist, int x);//删除数据
int SListLength(SList* plist);//求长度
void SListReverse(SList* plist);//逆转
void SListClear(SList* plist);//清除
void SListDestroy(SList *plist);
void SListRemoveAll(SList *plist ,int x);//删除等于x的所有值
void SListSort(SList *plist);//排序




///////////////////////////////////
void SListInit(SList* plist)//初始化链表
{
	SListNode *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->size = 0;
}
void SListPushBack(SList* plist, int x)//尾插
{
	assert(plist != NULL);
	SListNode *s = _Buynode(x);
	plist->last->next = s;
	plist->last = s;
	plist->size++;
}
void SListShow(SList* plist)//显示链表
{
	assert(plist != NULL);
	SListNode *p = plist->first->next;
	while (p != NULL)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("over.\n");
}
void SListPushFront(SList* plist, int x)//头插
{
	SListNode *s = _Buynode(x);
	s->next = plist->first->next;
	plist->first->next = s;
	if (plist->size == 0)
		plist->last = s;
	plist->size++;
}
SListNode* SListFindByVal(SList* plist, int key)//查找数据
{
	assert(plist != NULL);
	SListNode *p = plist->first->next;
	while (p != NULL && p->data != key)
		p = p->next;
	return p;
}
bool SListInsertByVal(SList* plist, int x)//插入数据
{
	assert(plist != NULL);
	SListNode *p = _Buynode(x);
	SListNode *q = plist->first;
	while (q->next != NULL && q->next->data<x)
	{
		q = q->next;
		if (q->next == NULL)
			plist->last = p;
		else
		{
            p->next = q->next;
			q->next = p;
		 }
		plist->size++;
	}
	return true;
}
bool SListEraseByVal(SList* plist, int x)//删除数据
{
	assert(plist != NULL);
	SListNode *p = plist->first;
	SListNode *s = SListFindByVal(plist, x);
	if (s == NULL)
		return false;
	while (p->next != s)
	{
		p = p->next;
	}
	if (s == plist->last)
		plist->last = p;
	else
		p->next = s->next;
	free(s);
	plist->size--;
	return true;
}
int SListLength(SList* plist)//求长度
{
	assert(plist != NULL);
	return plist->size;
}
void SListReverse(SList* plist)//逆转
{
	SListNode *p, *q;
	p = plist->first->next;
	q = p->next;
	plist->last = p;
	plist->last->next = NULL;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		p->next = plist->first->next;
		plist->first->next = p;
	}
}
void SListClear(SList* plist)//清除
{
	SListNode *p = plist->first->next;
	if (plist->size == 0)
		return;
	while (p != NULL)
	{
		plist->first->next = p->next;
		free(p);
		p = plist->first->next;
	}
	plist->first = plist->last;
	plist->size = 0;
}
//void SListDestroy(SList *plist)
//{
//	free(plist->first);
//	SListClear(plist);
//	plist->first = plist->last = NULL;
//	plist->size = 0;
//}
void SListRemoveAll(SList *plist, int x)//删除等于x的所有值
{
	assert(plist != NULL);
	SListNode *p = plist->first;
	SListNode *s = p->next;

	while (s != NULL)
	{
		if (s->data == x)
		{
			p->next = s->next;
			s = p->next;
		}
		else
		{
            s = s->next;
		    p = p->next;
		}
	}
	return ;
}
void SListSort(SList *plist)//排序
{
	SListNode *pf = plist->first;
	SListNode *pb = pf->next;
	SListNode       temp;

	while (pf->next != NULL) {//以pf指向的节点为基准节点
		pb = pf->next;//pb从基准点的下一个节点开始
		while (pb != NULL) {
			if (pf->data > pb->data) {
				temp = *pf;
				*pf = *pb;
				*pb = temp;
				temp.next = pf->next;
				pf->next = pb->next;
				pb->next = temp.next;
			}
			pb = pb->next;
		}
		pf = pf->next;
	}
	return;
}


#endif