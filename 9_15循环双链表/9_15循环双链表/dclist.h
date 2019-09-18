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
DCListNode* _Buynode(DataType x)//�����ڵ�
{
	DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	s->prev = NULL;
	return s;
}



void DCListInit(DCList* plist);//��ʼѭ��˫����
void DCListPushBack(DCList* plist, DataType item);//β��
void DCListPushFront(DCList* plist, DataType item);//ͷ��
void DCListShow(DCList* plist);//��ʾ����
DCListNode* DCListFindByVal(DCList* plist, DataType key);//��������
bool DCListInsertByVal(DCList* plist, DataType x);//�������������
bool DCListEraseByVal(DCList* plist, DataType x);//ɾ������
int DCListLength(DCList* plist);//�󳤶�

void DCListReverse(DCList* plist);//��ת




/////////////////////////////////////////////////
void DCListInit(DCList* plist)//��ʼѭ��˫����
{
	DCList *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->first->prev = plist->last;
	plist->last->next = plist->last;
	plist->size = 0;
}
void DCListPushBack(DCList* plist, DataType x)//β��
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
void DCListPushFront(DCList* plist, DataType x)//ͷ��
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
void DCListShow(DCList* plist)//��ʾ����
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
DCListNode* DCListFindByVal(DCList* plist, DataType key)//��������
{
	assert(plist != NULL);
	DCListNode *p = plist->first->next;
	while (p != plist->first && p->data != key)
		p = p->next;
	return p;
}
bool DCListInsertByVal(DCList* plist, DataType x)//�������������
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
bool DCListEraseByVal(DCList* plist, DataType x)//ɾ������
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
int DCListLength(DCList* plist)//�󳤶�
{
	assert(plist != NULL);
	return plist->size;
}
void DCListReverse(DCList* plist)//��ת
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