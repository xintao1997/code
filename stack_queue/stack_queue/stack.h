#ifndef _STACK_H_
#define _STACK_H_
#include"common.h"
#define DEFAULT_STACK_SIZE 8

typedef struct Stack
{
	DataType *base;
	size_t   capacity;
	size_t   top;
}Stack;

void StackInit(Stack *pst, size_t sz);//��ʼ��ջ
void StackPush(Stack *pst, DataType x);//��ջ
void StackPoP(Stack *pst);//��ջ
void StackShow(Stack *pst);//��ʾջ
DataType StackTop(Stack *pst);//ȡջ��Ԫ��
void StackClear(Stack *pst);//���ջ
void StackDestroy(Stack *pst);//�ݻ�ջ


bool StackIsFull(Stack *pst)//�ж�ջ�Ƿ�Ϊ��
{return pst->top >= pst->capacity;}
bool StackIsEmpty(Stack *pst)//�ж�ջ�Ƿ�Ϊ��
{return pst->top == 0;}
//////////////////////////////////////////////

void StackInit(Stack *pst, size_t sz)//��ʼ��ջ
{
	pst->capacity = sz > DEFAULT_STACK_SIZE ? sz : DEFAULT_STACK_SIZE;
	pst->base = (DataType*)malloc(sizeof(DataType)*(pst->capacity));
	assert(pst->base != NULL);
	pst->top = 0;
}
void StackPush(Stack *pst, DataType x)//��ջ
{
	if (StackIsFull(pst))
	{
		printf("ջ������%d������ջ��\n", x);
		return;
	}
	pst->base[pst->top++] = x;
}
void StackPop(Stack *pst)//��ջ
{
	if (StackIsEmpty(pst))
	{
		printf("ջ�Կղ��ܳ�ջ��\n");
		return;
	}
	pst->top--;
}
void StackShow(Stack *pst)//��ʾջ
{
	for (int i = pst->top-1; i >= 0; i--)
	{
		printf("%d\n", pst->base[i]);
	}
}

DataType StackTop(Stack *pst)//ȡջ��Ԫ��
{
	if (StackIsEmpty(pst))
	{
		printf("ջ�Կղ���ȡ��ջ��Ԫ��\n");
		return;
	}
	return pst->base[pst->top - 1];
}
void StackClear(Stack *pst)
{
	pst->top = 0;
}
void StackDestroy(Stack *pst)
{
	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->top = 0;
}

#endif /*_STACK_H*/