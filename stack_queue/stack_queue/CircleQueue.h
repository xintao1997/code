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

bool CircleQueueIsFull(CircleQueue *q)//判断是否为满
{
	if ((q->tail + 1) % q->capacity == q->front)
		return true;
	return false;
}
bool CircleQueueIsEmpty(CircleQueue *q)//判断是否为空
{
	if (q->tail == q->front)
		return true;
	return false;
}
void CircleQueueInit(CircleQueue *q, int sz);//初始化
void CircleQueuePush(CircleQueue *q, DataType x);//入队
void CircleQueuePop(CircleQueue *q);//出队
DataType CircleQueueFront(CircleQueue *q);//取队头
void CircleQueueShow(CircleQueue *q);//显示


////////////////////////////////////////////////////
void CircleQueueInit(CircleQueue *q, int sz)//初始化
{
	q->capacity = sz > DEFAULT_QUEUE_SIZE ? sz : DEFAULT_QUEUE_SIZE;
	q->base = (CircleQueue *)malloc(sizeof(CircleQueue)*(q->capacity));
	assert(q->base != NULL);
	q->front = q->tail = 0;
}
void CircleQueuePush(CircleQueue *q, DataType x)//入队
{
	if (CircleQueueIsFull(q))
	{
		printf("队以满，%d不能入队.\n",x);
		return;
	}
	q->base[q->tail] = x;
	q->tail = (q->tail + 1) % q->capacity;
}
void CircleQueuePop(CircleQueue *q)//出队
{
	if (CircleQueueIsEmpty(q))
	{
		printf("队以空，不能出队.\n");
		return;
	}
	q->front = (q->front + 1) % q->capacity;
}
DataType CircleQueueFront(CircleQueue *q)//取队头
{
	if (CircleQueueIsEmpty(q))
	{
		printf("队以空，不能取队头.\n");
		return;
	}
	return q->base[q->front];
}
void CircleQueueShow(CircleQueue *q)//显示
{
	for (int i = q->front; i != q->tail;)
	{
		printf("%d  ", q->base[i]);
		i = (i + 1) % q->capacity;
	}
	printf("\n");
}







#endif /*_QUEUE_H_*/