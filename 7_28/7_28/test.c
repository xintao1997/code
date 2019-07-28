#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印任意乘法表
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


//使用函数实现两数交换
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

//用函数实现year是不是闰年
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
//		printf("不是闰年\n");
//	else
//		printf("是闰年\n");
//	return 0;
//
//}

//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
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
//	memset(arr, 0, sz*sizeof(arr[0]));//void *memset(void *s, int ch, size_t n);函数解释：将s中当前位置后面的n个字节 （typedef unsigned int size_t ）用 ch 替换并返回 s 。
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

//使函数判断是不是素数

void ju_print(int num)
{
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
	}
	if (i>=num)
		printf("不是素数\n");
	else
		printf("是素数\n");
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	ju_print(num);
	return 0;
}