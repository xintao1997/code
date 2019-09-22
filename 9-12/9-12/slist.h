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
void SListInit(SList* plist);//��ʼ������
void SListPushBack(SList* plist, int x);//β��
void SListShow(SList* plist);//��ʾ����
void SListPushFront(SList* plist, int x);//ͷ��
SListNode* SListFindByVal(SList* plist, int key);//��������
bool SListInsertByVal(SList* plist, int x);//��������
bool SListEraseByVal(SList* plist, int x);//ɾ������
int SListLength(SList* plist);//�󳤶�
void SListReverse(SList* plist);//��ת
void SListClear(SList* plist);//���
void SListDestroy(SList *plist);
void SListRemoveAll(SList *plist ,int x);//ɾ������x������ֵ
void SListSort(SList *plist);//����




///////////////////////////////////
void SListInit(SList* plist)//��ʼ������
{
	SListNode *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->size = 0;
}
void SListPushBack(SList* plist, int x)//β��
{
	assert(plist != NULL);
	SListNode *s = _Buynode(x);
	plist->last->next = s;
	plist->last = s;
	plist->size++;
}
void SListShow(SList* plist)//��ʾ����
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
void SListPushFront(SList* plist, int x)//ͷ��
{
	SListNode *s = _Buynode(x);
	s->next = plist->first->next;
	plist->first->next = s;
	if (plist->size == 0)
		plist->last = s;
	plist->size++;
}
SListNode* SListFindByVal(SList* plist, int key)//��������
{
	assert(plist != NULL);
	SListNode *p = plist->first->next;
	while (p != NULL && p->data != key)
		p = p->next;
	return p;
}
bool SListInsertByVal(SList* plist, int x)//��������
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
bool SListEraseByVal(SList* plist, int x)//ɾ������
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
int SListLength(SList* plist)//�󳤶�
{
	assert(plist != NULL);
	return plist->size;
}
void SListReverse(SList* plist)//��ת
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
void SListClear(SList* plist)//���
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
void SListRemoveAll(SList *plist, int x)//ɾ������x������ֵ
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
void SListSort(SList *plist)//����
{
	SListNode *pf = plist->first;
	SListNode *pb = pf->next;
	SListNode       temp;

	while (pf->next != NULL) {//��pfָ��Ľڵ�Ϊ��׼�ڵ�
		pb = pf->next;//pb�ӻ�׼�����һ���ڵ㿪ʼ
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