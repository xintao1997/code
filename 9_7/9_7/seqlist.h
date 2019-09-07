#ifndef _SEQLIST_H
#define _SEQLIST_H

typedef struct SeqList
{
	DataType *base;
	size_t capactiy;
	size_t size;
}SeqList;

void SeqListlnit(SeqList* psl, size_t capactiy);
void SeqListPushBack(SeqList* psl, DataType x);//β��
void SeqListPushFront(SeqList* psl, DataType x);//ͷ��
void SeqListShow(SeqList* psl);//��ӡ����
void SeqListPopBack(SeqList* psl);//βɾ
void SeqListPopFront(SeqList* psl);//ͷɾ


///////////////////////////////////////////////////
void SeqListlnit(SeqList* psl, size_t capactiy)
{
	psl->base = (DataType*)malloc(sizeof(DataType)*capactiy);
	psl->capactiy = capactiy;
	psl->size = 0;
}


void SeqListPushBack(SeqList* psl, DataType x)//β��
{
	if (psl->size >= psl->capactiy)
	{
		printf("˳���ռ�������%d���ܲ��롣\n", x);
		return;
	}
	psl->base[psl->size++] = x;
}
void SeqListPushFront(SeqList* psl, DataType x)//ͷ��
{
	if (psl->size >= psl->capactiy)
	{
		printf("˳���ռ�������%d���ܲ��롣\n", x);
		return;
	}
	for (int i = psl->size;  i > 0; i--)
	{
		psl->base[i] = psl->base[i - 1];
	}
	psl->base[0] = x;
	psl->size++;
}
void SeqListShow(SeqList* psl)//��ӡ����
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->base[i]);
	}
	printf("\n");
}
void SeqListPopBack(SeqList* psl)//βɾ
{
	if (psl->size == 0)
	{
		printf("������û������\n");
		return;
	}
	 psl->size--;
}
void SeqListPopFront(SeqList* psl)//ͷɾ
{
	if (psl->size == 0)
	{
		printf("������û������\n");
		return;
	}
	for (int i = 1; i < psl->size; i++)
	{
		psl->base[i-1] = psl->base[i];
	}
	psl->size--;
}




#endif /* _SEQLIST_H_ */