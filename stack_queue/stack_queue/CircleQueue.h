#ifndef _QUEUE_H_
#define _QUEUE_H_
#include"common.h"


typedef struct CircleQueue
{
	DataType *base;
	size_t   capacity;
	size_t   front;
	size_t   tail;
}CircleQueue;

#define DEFAULT_QUEUE_SIZE 8

bool CircleQueueIsFull(CircleQueue *q)//�ж��Ƿ�Ϊ��
{
	if ((q->tail + 1) % q->capacity == q->front)
		return true;
	return false;
}
bool CircleQueueIsEmpty(CircleQueue *q)//�ж��Ƿ�Ϊ��
{
	if (q->tail == q->front)
		return true;
	return false;
}
void CircleQueueInit(CircleQueue *q, int sz);//��ʼ��
void CircleQueuePush(CircleQueue *q, DataType x);//���
void CircleQueuePop(CircleQueue *q);//����
DataType CircleQueueFront(CircleQueue *q);//ȡ��ͷ
void CircleQueueShow(CircleQueue *q);//��ʾ


////////////////////////////////////////////////////
void CircleQueueInit(CircleQueue *q, int sz)//��ʼ��
{
	q->capacity = sz > DEFAULT_QUEUE_SIZE ? sz : DEFAULT_QUEUE_SIZE;
	q->base = (CircleQueue *)malloc(sizeof(CircleQueue)*(q->capacity));
	assert(q->base != NULL);
	q->front = q->tail = 0;
}
void CircleQueuePush(CircleQueue *q, DataType x)//���
{
	if (CircleQueueIsFull(q))
	{
		printf("��������%d�������.\n",x);
		return;
	}
	q->base[q->tail] = x;
	q->tail = (q->tail + 1) % q->capacity;
}
void CircleQueuePop(CircleQueue *q)//����
{
	if (CircleQueueIsEmpty(q))
	{
		printf("���Կգ����ܳ���.\n");
		return;
	}
	q->front = (q->front + 1) % q->capacity;
}
DataType CircleQueueFront(CircleQueue *q)//ȡ��ͷ
{
	if (CircleQueueIsEmpty(q))
	{
		printf("���Կգ�����ȡ��ͷ.\n");
		return;
	}
	return q->base[q->front];
}
void CircleQueueShow(CircleQueue *q)//��ʾ
{
	for (int i = q->front; i != q->tail;)
	{
		printf("%d  ", q->base[i]);
		i = (i + 1) % q->capacity;
	}
	printf("\n");
}







#endif /*_QUEUE_H_*/