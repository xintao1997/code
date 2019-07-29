#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//打印菱形星星
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


//屏幕打印图案
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



//求出0～999之间的所有“水仙花数”并输出。 
//int main()
//{
//	int i = 0;
//	int g, s, b;
//	printf("0~999之间的水仙花数为：\n");
//	for (i; i < 1000; i++)
//	{
//		g = i % 10;                     //求个位数
//		s = i / 10 - (i / 100) * 10;    //求十位数
//		b = i / 100;                    //求百位数
//		if (i == g*g*g + s*s*s + b*b*b) //水仙花数的判定方法
//		{
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int Sn = 0;
//	int tmp = 0;
//	int a = 0;
//    int i = 0;
//	scanf("%d", &a);
//	if (a < 0 || a > 9)
//	{
//		printf("输入错误\n");
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
