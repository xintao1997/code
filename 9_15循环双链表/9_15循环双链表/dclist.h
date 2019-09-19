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
void DCListRemoveAll(DCList* plist, DataType x);//ɾ����Ϊx��ֵ
void DCListReverse(DCList* plist);//��ת
void DCListSort(DCList* plist);//����

void DCListClear(DCList* plist);//���



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
	while (p != plist->first)
	{
		if (p->data == key)
			return p;
		p = p->next;
	}
	return NULL;
}
bool DCListInsertByVal(DCList* plist, DataType x)//�������������
{
	assert(plist != NULL);
	DCListNode *p = _Buynode(x);
	DCListNode *q = plist->first->next;
	while (q != plist->first && q->data<x)
		q = q->next;
		if (q == plist->last)
			plist->last = p;
		else
		{
			p->next = q;
			p->prev = q->prev;
			q->prev->next = p;
			q->prev = p;
		}
		plist->size++;
	
	return true;
}
bool DCListEraseByVal(DCList* plist, DataType x)//ɾ������
{
	assert(plist != NULL);
	DCListNode *s = DCListFindByVal(plist, x);
	if (s == NULL)
		return false;
	else if (s == plist->last)
		plist->last = s->prev;
	else
	{ 
		s->prev->next = s->next;
	    s->next->prev = s->prev;
	}
       
	
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
	while (q != plist->first)
	{
		p = q;
		q = q->next;
		p->next = plist->first->next;
		p->prev = plist->first;
		plist->first->next = p;
		p->prev = p;
	}
}
void DCListSort(DCList* plist)//����
{
	DCListNode *p = plist->first->next;
	DCListNode *q = p->next;
	plist->last = p;
	plist->last->next = plist->first;
	plist->first->prev = plist->last;

	DCListNode *cur;
	while (q != plist->first)
	{
		p = q;
		q = q->next;

		cur = plist->first->next;
		while (cur != plist->first && cur->data < p->data)
			cur = cur->next;
		if (cur == plist->first) 
		{
			p->prev = plist->last;
			plist->last->next = p;
			plist->last = p;
			plist->last->next = plist->first;
			plist->first->prev = plist->last;
			continue;
		}

		p->next = cur;
		p->prev = cur->prev;
		p->prev->next = p;
		cur->prev = p;
	}
}
void DCListRemoveAll(DCList* plist, DataType x)//ɾ����Ϊx��ֵ
{
	assert(plist != NULL);
	DCListNode *p = plist->first->next;
	while (p != plist->first)
	{
		if (p->data == x)
		{
			p->prev->next = p->next;
			p->next->prev = p->prev;
		}
		p = p->next;
	}
	return;
}


void DCListClear(DCList* plist)//���
{
	DCListNode *p = plist->first->next;
	while (p != plist->first)
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;
		free(p);
		p = plist->first->next;
	}
	plist->last = plist->first;
	plist->size = 0;

}



#endif 