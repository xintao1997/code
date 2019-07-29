#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
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


// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 

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

//编写程序数一下1到100整数中数字9出现的次数
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
		if (i / 10 == 9)//90-99比较特殊
		{
			j++;
		}
	}
	printf("1到100整数中数字9出现的次数为:%d\n", j);
	system("pause");
	return 0;
}

