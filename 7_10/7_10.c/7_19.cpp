#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <stdlib.h>

//�ҳ�100-200֮�������
/*int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)     //���ҳ���100��200����������,��Ϊi
	{
		int j = 0;
		for (j = 2; j<i; j++)      //��iȥ�Գ���1�������������������
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}*/


//����˷��ھ���
/*int main()
{
	int i=0, j=0;
	for (i = 1; i <= 9; i++)//  i�����������������ô���9
	{
		for (j = 1; j <= i; j++)//  j��������������j<=i���Ƶ�i�е��������С�ڵ���i
		   {
			printf("%d*%d=%2d ", j, i, j*i);
			if (i == j)//  �ж����е�����
				printf("\n");
			}
		}
		system("pause");
		return 0;
}*/


//���1000��-2000��֮�������
int main()
{
	int year=0;
	for (year = 1000; year <= 2000; year++)//���ҳ���1000��2000����������,��Ϊyear
	{
		if (year % 400 == 0)               //���year��������400�����
		{
			printf("%d ", year);           
		}
		else if (year % 4 == 0 && year % 100 != 0)//���year��������4��year��������100
		{
			printf("%d ", year);
		}
	}
	system("pause");
	return 0;
}