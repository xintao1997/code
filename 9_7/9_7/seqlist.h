#ifndef _SEQLIST_H
#define _SEQLIST_H

typedef struct SeqList
{
	DataType *base;
	size_t capactiy;
	size_t size;
}SeqList;

void SeqListlnit(SeqList* psl, size_t capactiy);
void SeqListPushBack(SeqList* psl, DataType x);//尾插
void SeqListPushFront(SeqList* psl, DataType x);//头插
void SeqListShow(SeqList* psl);//打印链表
void SeqListPopBack(SeqList* psl);//尾删
void SeqListPopFront(SeqList* psl);//头删


///////////////////////////////////////////////////
void SeqListlnit(SeqList* psl, size_t capactiy)
{
	psl->base = (DataType*)malloc(sizeof(DataType)*capactiy);
	psl->capactiy = capactiy;
	psl->size = 0;
}


void SeqListPushBack(SeqList* psl, DataType x)//尾插
{
	if (psl->size >= psl->capactiy)
	{
		printf("顺序表空间已满，%d不能插入。\n", x);
		return;
	}
	psl->base[psl->size++] = x;
}
void SeqListPushFront(SeqList* psl, DataType x)//头插
{
	if (psl->size >= psl->capactiy)
	{
		printf("顺序表空间已满，%d不能插入。\n", x);
		return;
	}
	for (int i = psl->size;  i > 0; i--)
	{
		psl->base[i] = psl->base[i - 1];
	}
	psl->base[0] = x;
	psl->size++;
}
void SeqListShow(SeqList* psl)//打印链表
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->base[i]);
	}
	printf("\n");
}
void SeqListPopBack(SeqList* psl)//尾删
{
	if (psl->size == 0)
	{
		printf("链表中没有数据\n");
		return;
	}
	 psl->size--;
}
void SeqListPopFront(SeqList* psl)//头删
{
	if (psl->size == 0)
	{
		printf("链表中没有数据\n");
		return;
	}
	for (int i = 1; i < psl->size; i++)
	{
		psl->base[i-1] = psl->base[i];
	}
	psl->size--;
}




#endif /* _SEQLIST_H_ */