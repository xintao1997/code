#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��ӡ��������
//int main()
//{
//	int i, j, k;
//	int N = 7;
//	for (i = 1; i <= N; i++)
//	{
//		for (k = i; k <= N - 1; k++)
//			printf(" ");
//		for (j = 1; j<+2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 7; i >= 1; i--)
//	{
//		for (k = i; k <= N - 1; k++)
//			printf(" ");
//		for (j = 1; j<+2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//��Ļ��ӡͼ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int N = 7;
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 1; j<2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		printf("\n");
//	}
//	for (i = 7; i >= 1; i--)
//	{
//		for (j = 1; j<2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//���0��999֮������С�ˮ�ɻ������������ 
//int main()
//{
//	int i = 0;
//	int g, s, b;
//	printf("0~999֮���ˮ�ɻ���Ϊ��\n");
//	for (i; i < 1000; i++)
//	{
//		g = i % 10;                     //���λ��
//		s = i / 10 - (i / 100) * 10;    //��ʮλ��
//		b = i / 100;                    //���λ��
//		if (i == g*g*g + s*s*s + b*b*b) //ˮ�ɻ������ж�����
//		{
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


////��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//int main()
//{
//	int Sn = 0;
//	int tmp = 0;
//	int a = 0;
//    int i = 0;
//	scanf("%d", &a);
//	if (a < 0 || a > 9)
//	{
//		printf("�������\n");
//	}
//	else
//	{
//		for (i; i <= 5; i++)
//		{
//			tmp = tmp * 10 + a;
//			Sn += tmp;
//		}
//        printf("%d\n",Sn);
//	}
//	system("pause");
//	return 0;
//}
