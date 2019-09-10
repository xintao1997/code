#ifndef _SEQLIST_H
#define _SEQLIST_H

#define NULL_DATA -1

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
int SeqListFindByPos(SeqList* psl, int pos);//按查找位置
int SeqListFindByVal(SeqList* psl, int item);//按数据查找
bool SeqListInsertByPos(SeqList* psl, int pos, int item);//按位置插入
bool SeqListEraseByPos(SeqList *psl, int pos);//按位置删除数据
bool SeqListEraseByVal(SeqList* psl, int item);//删除数据
size_t SeqListLength(SeqList* psl);//求顺序表长度
void SeqListRemoveAll(SeqList* psl, int item);//删除指定所有值
void SeqListReverse(SeqList* psl);//逆序顺序表
void SeqListSort(SeqList* psl);//降序排列
void SeqListDestroy(SeqList *psl);//释放顺序表

bool _Inc(SeqList *psl)
{
	DataType *new_base =
		(DataType *)malloc(sizeof(DataType)*(psl->capactiy + INC_SIZE));
	if (new_base == NULL)
		return false;

	memcpy(new_base, psl->base, sizeof(DataType)*psl->capactiy);
	free(psl->base);

	psl->base = new_base;
	psl->capactiy += INC_SIZE;
	return true;
}
bool SeqListIsFull(SeqList *psl)
{
	if (psl->size >= psl->capactiy)
		return true;
	return false;
}


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
	for (int i = 0; i < psl->size-1; i++)
	{
		psl->base[i] = psl->base[i+1];
	}
	psl->size--;
}

int SeqListFindByPos(SeqList* psl, int pos)//按位置查找
{
	if (pos < 0 || pos >= psl->size)
	{
		printf("查询位置无效.\n");
			return NULL_DATA;
	}
	return psl->base[pos];
}
int SeqListFindByVal(SeqList* psl, int item)//按数据查找
{
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->base[i] == item)
			return i;		
	}
	return -1;
}
bool SeqListInsertByPos(SeqList* psl, int pos, int item)//按位置插入
{
	if (pos<0 || pos>psl->size)
		return false;
	if (SeqListIsFull(psl) && !_Inc(psl))
	{
		printf("顺序表空间已满,%d不能插入.\n",item);
		return false;
	}
	for (int i = psl->size; i > pos; --i)
		psl->base[i] = psl->base[i - 1];
	psl->base[pos] = item;
	psl->size++;
	return true;

}
bool SeqListEraseByPos(SeqList *psl, int pos)//按位置删除数据
{
	if (pos < 0 || pos >= psl->size)
		return false;
	for (int i = pos; i < psl->size - 1; i++)
		psl->base[i] = psl->base[i + 1];
	psl->size--;
	return true;
}
bool SeqListEraseByVal(SeqList* psl, int item)//删除数据
{
	int index = SeqListFindByVal(psl, item);
	if (index == -1)
		return false;
	return SeqListEraseByPos(psl, index);
}
size_t SeqListLength(SeqList* psl)//求顺序表长度
{
	return psl->size;
}

void SeqListRemoveAll(SeqList* psl, int item)//删除指定所有值
{
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->base[i] == item)
		{
			for (int j = i; j < psl->size - 1; j++)
			{
				psl->base[i] = psl->base[i + 1];
			}
			psl->size--;
			i--;
		}
	}
}
void SeqListReverse(SeqList* psl)//逆序顺序表
{
	if (psl->size >= 2)
	{
		int begin = 0;
		int end = psl->size - 1;
		while (begin < end)
		{
			Swap(&(psl->base[begin]), &(psl->base[end]));
			begin++;
			end--;
		}
	}
}
void SeqListSort(SeqList* psl)//降序排列
{
	for (int i = 0; i < psl->size - 1; i++)
	{
		for (int j = 0; j < psl->size - 1 - i; j++)
		{
			if (psl->base[j] > psl->base[j + 1])
			{
				Swap(&(psl->base[j]), &(psl->base[j + 1]));
			}
		}
	}
}
void SeqListClear(SeqList *psl)//清除顺序表
{
	psl->size = 0;
}
void SeqListDestroy(SeqList *psl)//释放顺序表
{
	free(psl->base);
	psl->base = NULL;
	psl->capactiy = psl->size = 0;
}
#endif /* _SEQLIST_H_ */