#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ʵ��mommove
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

//дһ���������ز����������� 1 �ĸ��� 

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

//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�

//void print_num(int num)
//{
//	int i = 0;
//	printf("ż����Ϊ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num >> i) & 1);
//	}
//	printf("\n");
//	printf("������Ϊ��");
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


//3. ���һ��������ÿһλ�� 
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


//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ

void compare_num(int a, int b)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	printf("��ͬ����Ϊ��%d\n", count);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	compare_num(a, b);
	return 0;
}