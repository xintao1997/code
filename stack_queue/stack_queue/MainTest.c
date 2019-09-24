#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
//#include"stack.h"
//#include"queue.h"
#include"CircleQueue.h"


//int main()//栈的操作
//{
//	Stack st;
//	StackInit(&st, 8);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	StackPush(&st, 5);
//	StackShow(&st);
//	printf("----------------\n");
//	DataType val = StackTop(&st);
//	StackPop(&st);
//	StackPop(&st);
//	StackPop(&st);
//	StackShow(&st);
//	StackDestroy(&st);
//	return 0;
//}

//int main()  //顺序对列
//{
//	Queue Q;
//	QueueInit(&Q, 10);
//	QueuePush(&Q, 1);
//	QueuePush(&Q, 2);
//	QueuePush(&Q, 3);
//	QueuePush(&Q, 4);
//	QueuePush(&Q, 5);
//	QueuePush(&Q, 6);
//
//	QueueShow(&Q);
//	QueuePop(&Q);
//	QueuePop(&Q);
//	QueuePop(&Q);
//	QueueShow(&Q);
//
//
//	QueuePush(&Q, 10);
//	QueuePush(&Q, 20);
//	QueuePush(&Q, 30);
//	QueuePush(&Q, 40);
//	QueuePush(&Q, 50);
//	QueuePush(&Q, 60);
//
//	QueueShow(&Q);
//	return 0;
//}

int main()
{
	CircleQueue Q;
	CircleQueueInit(&Q, 8);

	CircleQueuePush(&Q, 1);
	CircleQueuePush(&Q, 2);
	CircleQueuePush(&Q, 3);
	CircleQueuePush(&Q, 4);
	CircleQueuePush(&Q, 5);
	CircleQueuePush(&Q, 6);
	CircleQueuePush(&Q, 7);
	CircleQueuePush(&Q, 8);
	CircleQueueShow(&Q);
	CircleQueuePop(&Q);
	CircleQueueShow(&Q);

	CircleQueuePush(&Q, 8);
	CircleQueueShow(&Q);

	CircleQueuePop(&Q);
	CircleQueueShow(&Q);

	CircleQueuePush(&Q, 9);
	CircleQueueShow(&Q);


	return 0;
}