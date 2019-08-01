#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//实现mommove
//void my_memmove(void* dest, const void* str, size_t count)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	void* ret = dest;
//	if (dest < str)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)str;
//			((char*)dest)++;
//			((char*)str)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)str + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1, 2, 3 };
//	int i = 0;
//	my_memmove(arr1, arr2, 12);
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数 

//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((value & 1) == 1)
//			count++;
//        value = value >> 1;
//	}
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = count_one_bits(a);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。

//void print_num(int num)
//{
//	int i = 0;
//	printf("偶数列为：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数列为：");
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_num(num);
//	return 0;
//}


//3. 输出一个整数的每一位。 
//void print(int num)
//{
//	int i = 0;
//	for (i = 32; i >= 0; i--)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//    print(a);
//	return 0;
//}


//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同

void compare_num(int a, int b)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	printf("相同个数为：%d\n", count);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	compare_num(a, b);
	return 0;
}