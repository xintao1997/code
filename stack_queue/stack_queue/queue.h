#ifndef _QUEUE_H_
#define _QUEUE_H_
#include"common.h"

typedef struct Queue
{
	DataType *base;
	size_t      capacity;
	size_t      front;
	size_t      tail;
}Queue;

#define DEFAULT_QUEUE_SIZE 80

bool QueueIsFull(Queue *p)//�ж��Ƿ�Ϊ��
{
	return p->tail == p->capacity;
}
bool QueueIsEmpty(Queue *p)//�ж��Ƿ�Ϊ��
{
	return p->front == p->tail;
}
void QueueInit(Queue *q, int sz);//��ʼ��
void QueuePush(Queue *q, DataType x);//���
void QueuePop(Queue *q);//����
DataType QueueFront(Queue *q);//ȡ��ͷԪ��
void QueueShow(Queue *q);//��ʾ��







///////////////////////////////////////
void QueueInit(Queue *q, int sz)//��ʼ��
{
	q->capacity = sz > DEFAULT_QUEUE_SIZE ? sz : DEFAULT_QUEUE_SIZE;
	q->base = (DataType *)malloc(sizeof(DataType)*(q->capacity));
	assert(q->base != NULL);
	q->front = q->tail = 0;
}
void QueuePush(Queue *q, DataType x)//���
{
	if (QueueIsFull(q))
	{
		printf("��������%d�������\n", x);
	}
	q->base[q->tail++] = x;
}
void QueuePop(Queue *q)//����
{
	if (QueueIsEmpty(q))
	{
		printf("���Կղ��ܳ���.\n");
	}
	q->front++;
}
DataType QueueFront(Queue *q)//ȡ��ͷԪ��
{
	if (QueueIsEmpty(q))
	{
		printf("���Կղ���ȡ��ͷ.\n");
	}
	return q->base[q->front];
}
void QueueShow(Queue *q)//��ʾ��
{
	for (int i = q->front; i < q->tail; i++)
	{
		printf("%d ", q->base[i]);
	}
	printf("\n");
}


#endif  /*_QUEUE_H_*/