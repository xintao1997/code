#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
//int main()
//{
//	int arr1[5] = { 1, 3, 5, 7, 9 };
//	int arr2[5] = { 3, 4, 5, 6, 7 };
//	int tmp = 0;
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	printf("\n");
//	for (j = 0; j <= 5; j++)
//	{
//		int tmp = arr1[j];
//		arr1[j] = arr2[j];
//		arr2[j] = tmp;
//	}
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//		printf("\n");
//        system("pause");
//	return 0;
//}


// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 

//int main()
//{
//	double i = 0;
//	int flag = -1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		flag = -flag;
//		sum = flag*(1 / i) + sum;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}

//��д������һ��1��100����������9���ֵĴ���
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			j++;
		}
		if (i / 10 == 9)//90-99�Ƚ�����
		{
			j++;
		}
	}
	printf("1��100����������9���ֵĴ���Ϊ:%d\n", j);
	system("pause");
	return 0;
}

