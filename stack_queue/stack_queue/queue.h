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

bool QueueIsFull(Queue *p)//判断是否为满
{
	return p->tail == p->capacity;
}
bool QueueIsEmpty(Queue *p)//判断是否为空
{
	return p->front == p->tail;
}
void QueueInit(Queue *q, int sz);//初始化
void QueuePush(Queue *q, DataType x);//入队
void QueuePop(Queue *q);//出队
DataType QueueFront(Queue *q);//取队头元素
void QueueShow(Queue *q);//显示队







///////////////////////////////////////
void QueueInit(Queue *q, int sz)//初始化
{
	q->capacity = sz > DEFAULT_QUEUE_SIZE ? sz : DEFAULT_QUEUE_SIZE;
	q->base = (DataType *)malloc(sizeof(DataType)*(q->capacity));
	assert(q->base != NULL);
	q->front = q->tail = 0;
}
void QueuePush(Queue *q, DataType x)//入队
{
	if (QueueIsFull(q))
	{
		printf("队以满，%d不能入队\n", x);
	}
	q->base[q->tail++] = x;
}
void QueuePop(Queue *q)//出队
{
	if (QueueIsEmpty(q))
	{
		printf("队以空不能出队.\n");
	}
	q->front++;
}
DataType QueueFront(Queue *q)//取队头元素
{
	if (QueueIsEmpty(q))
	{
		printf("队以空不能取队头.\n");
	}
	return q->base[q->front];
}
void QueueShow(Queue *q)//显示队
{
	for (int i = q->front; i < q->tail; i++)
	{
		printf("%d ", q->base[i]);
	}
	printf("\n");
}


#endif  /*_QUEUE_H_*/