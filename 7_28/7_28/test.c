#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ����˷���
//int main()
//{
//	int row = 0;
//	scanf("%d", &row);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ʹ�ú���ʵ����������
//void exchange_num(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange_num(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//�ú���ʵ��year�ǲ�������
//int judge(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int a = judge(year);
//	if (a == 0)
//		printf("��������\n");
//	else
//		printf("������\n");
//	return 0;
//
//}

//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//void reverse(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;;
//	}
//}
//void Init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));//void *memset(void *s, int ch, size_t n);�������ͣ���s�е�ǰλ�ú����n���ֽ� ��typedef unsigned int size_t ���� ch �滻������ s ��
//}
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr);
//	print(arr);
//	reverse(arr, sz);
//	print(arr);
//	Empty(arr,sz);
//	print(arr);
//	return 0;
//}

//ʹ�����ж��ǲ�������

void ju_print(int num)
{
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
	}
	if (i>=num)
		printf("��������\n");
	else
		printf("������\n");
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	ju_print(num);
	return 0;
}