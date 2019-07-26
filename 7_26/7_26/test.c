#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//求俩数平均值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = a + (b - a) / 2;
//	//int ret = a&b + (b - a) / 2;
//	printf("%d\n", ret);
//	system("pause");
//}

//编写函数unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。

//unsigned int reverse_bit(int x)
//{
//	int data = 0;
//	int num = sizeof(int)* 8;//算出int类型长度为32
//	int i = 0;
//	while (i < num)
//	{
//		if ((x >> i) & 1)
//		{
//			data |= 1 << (31 - i);
//		}
//		i++;
//	}
//	return data;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("reverse_bit :%u\n", reverse_bit(a));
//	system("pause");
//	return 0;
//}

//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 请找出这个数字。（使用位运算）
//void find_num(int* p, int sz)
//{
//	int num = 0;
//	int count = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int n = 0;
//	int i = 0;
//	if ((sz % 2) == 1)//判断个数是否为奇数
//	{
//		for (i = 0; i < sz; i++)
//		{
//			num = num ^ *(p + i);//异或所有数字即为单数
//		}
//		printf("单数为：%d\n", num);
//	}
//	else
//	{
//		for (i = 0; i < sz; i++)
//		{
//			num = num ^ *(p + i);//异或所有数字
//		}
//		if (num == 0)//若为0则没有单数
//		{
//			printf("没有单数");
//		}
//		else
//		{
//			while (!(num & 1))
//			{
//				count++;
//				num = num >> 1;
//			}
//			for (i = 0; i < sz; i++)
//			{
//				n = p[i] >> count;
//
//				if (n & 1)
//					num1 = num1 ^ *(p + i);
//				else
//					num2 = num2 ^ *(p + i);
//			}
//			printf("俩个单数为：%d %d\n", num1, num2);
//		}
//	}
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", p[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 3, 2, 1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	find_num(arr, sz);
//	system("pause");
//	return 0;
//}

//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".

#include <string.h>
#include <assert.h>
void reverve_swap(char *left, char *right)
{
	assert(left != NULL); //断言不是空指针
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char *reverve(char *p)
{
	int len = strlen(p);
	char *start = p;
	char *end = NULL;
	char *ret = p;
	reverve_swap(p, p + len - 1); //逆序整个字符串
	while (*p)
	{
		start = p;
		while ((*p != ' ') && (*p != '\0')) //找到一块单词
		{
			p++;
		}
		end = p - 1;
		reverve_swap(start, end);//逆序单个单词
		if (*p == ' ') //找到空格
			p++;
	}
	return ret;

}
int main()
{
	char arr[] = "student a am I";
	printf("交换前：%s\n", arr);
	printf("交换后：%s\n", reverve(arr));
	system("pause");
	return 0;
}
