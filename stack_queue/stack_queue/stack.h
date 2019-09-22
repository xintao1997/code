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

void StackInit(Stack *pst, size_t sz);//初始化栈
void StackPush(Stack *pst, DataType x);//入栈
void StackPoP(Stack *pst);//出栈
void StackShow(Stack *pst);//显示栈
DataType StackTop(Stack *pst);//取栈顶元素
void StackClear(Stack *pst);//清除栈
void StackDestroy(Stack *pst);//摧毁栈


bool StackIsFull(Stack *pst)//判断栈是否为满
{return pst->top >= pst->capacity;}
bool StackIsEmpty(Stack *pst)//判断栈是否为空
{return pst->top == 0;}
//////////////////////////////////////////////

void StackInit(Stack *pst, size_t sz)//初始化栈
{
	pst->capacity = sz > DEFAULT_STACK_SIZE ? sz : DEFAULT_STACK_SIZE;
	pst->base = (DataType*)malloc(sizeof(DataType)*(pst->capacity));
	assert(pst->base != NULL);
	pst->top = 0;
}
void StackPush(Stack *pst, DataType x)//入栈
{
	if (StackIsFull(pst))
	{
		printf("栈以满，%d不能入栈。\n", x);
		return;
	}
	pst->base[pst->top++] = x;
}
void StackPop(Stack *pst)//出栈
{
	if (StackIsEmpty(pst))
	{
		printf("栈以空不能出栈。\n");
		return;
	}
	pst->top--;
}
void StackShow(Stack *pst)//显示栈
{
	for (int i = pst->top-1; i >= 0; i--)
	{
		printf("%d\n", pst->base[i]);
	}
}

DataType StackTop(Stack *pst)//取栈顶元素
{
	if (StackIsEmpty(pst))
	{
		printf("栈以空不能取出栈顶元素\n");
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