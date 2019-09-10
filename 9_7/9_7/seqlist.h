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
void SeqListPushBack(SeqList* psl, DataType x);//β��
void SeqListPushFront(SeqList* psl, DataType x);//ͷ��
void SeqListShow(SeqList* psl);//��ӡ����
void SeqListPopBack(SeqList* psl);//βɾ
void SeqListPopFront(SeqList* psl);//ͷɾ
int SeqListFindByPos(SeqList* psl, int pos);//������λ��
int SeqListFindByVal(SeqList* psl, int item);//�����ݲ���
bool SeqListInsertByPos(SeqList* psl, int pos, int item);//��λ�ò���
bool SeqListEraseByPos(SeqList *psl, int pos);//��λ��ɾ������
bool SeqListEraseByVal(SeqList* psl, int item);//ɾ������
size_t SeqListLength(SeqList* psl);//��˳�����
void SeqListRemoveAll(SeqList* psl, int item);//ɾ��ָ������ֵ
void SeqListReverse(SeqList* psl);//����˳���
void SeqListSort(SeqList* psl);//��������
void SeqListDestroy(SeqList *psl);//�ͷ�˳���

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
	for (int i = 0; i < psl->size-1; i++)
	{
		psl->base[i] = psl->base[i+1];
	}
	psl->size--;
}

int SeqListFindByPos(SeqList* psl, int pos)//��λ�ò���
{
	if (pos < 0 || pos >= psl->size)
	{
		printf("��ѯλ����Ч.\n");
			return NULL_DATA;
	}
	return psl->base[pos];
}
int SeqListFindByVal(SeqList* psl, int item)//�����ݲ���
{
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->base[i] == item)
			return i;		
	}
	return -1;
}
bool SeqListInsertByPos(SeqList* psl, int pos, int item)//��λ�ò���
{
	if (pos<0 || pos>psl->size)
		return false;
	if (SeqListIsFull(psl) && !_Inc(psl))
	{
		printf("˳���ռ�����,%d���ܲ���.\n",item);
		return false;
	}
	for (int i = psl->size; i > pos; --i)
		psl->base[i] = psl->base[i - 1];
	psl->base[pos] = item;
	psl->size++;
	return true;

}
bool SeqListEraseByPos(SeqList *psl, int pos)//��λ��ɾ������
{
	if (pos < 0 || pos >= psl->size)
		return false;
	for (int i = pos; i < psl->size - 1; i++)
		psl->base[i] = psl->base[i + 1];
	psl->size--;
	return true;
}
bool SeqListEraseByVal(SeqList* psl, int item)//ɾ������
{
	int index = SeqListFindByVal(psl, item);
	if (index == -1)
		return false;
	return SeqListEraseByPos(psl, index);
}
size_t SeqListLength(SeqList* psl)//��˳�����
{
	return psl->size;
}

void SeqListRemoveAll(SeqList* psl, int item)//ɾ��ָ������ֵ
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
void SeqListReverse(SeqList* psl)//����˳���
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
void SeqListSort(SeqList* psl)//��������
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
void SeqListClear(SeqList *psl)//���˳���
{
	psl->size = 0;
}
void SeqListDestroy(SeqList *psl)//�ͷ�˳���
{
	free(psl->base);
	psl->base = NULL;
	psl->capactiy = psl->size = 0;
}
#endif /* _SEQLIST_H_ */