#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//������ƽ��ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = a + (b - a) / 2;
//	//int ret = a&b + (b - a) / 2;
//	printf("%d\n", ret);
//	system("pause");
//}

//��д����unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

//unsigned int reverse_bit(int x)
//{
//	int data = 0;
//	int num = sizeof(int)* 8;//���int���ͳ���Ϊ32
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

//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� ���ҳ�������֡���ʹ��λ���㣩
//void find_num(int* p, int sz)
//{
//	int num = 0;
//	int count = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int n = 0;
//	int i = 0;
//	if ((sz % 2) == 1)//�жϸ����Ƿ�Ϊ����
//	{
//		for (i = 0; i < sz; i++)
//		{
//			num = num ^ *(p + i);//����������ּ�Ϊ����
//		}
//		printf("����Ϊ��%d\n", num);
//	}
//	else
//	{
//		for (i = 0; i < sz; i++)
//		{
//			num = num ^ *(p + i);//�����������
//		}
//		if (num == 0)//��Ϊ0��û�е���
//		{
//			printf("û�е���");
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
//			printf("��������Ϊ��%d %d\n", num1, num2);
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

//��һ���ַ����������Ϊ:"student a am i", ���㽫��������ݸ�Ϊ"i am a student".

#include <string.h>
#include <assert.h>
void reverve_swap(char *left, char *right)
{
	assert(left != NULL); //���Բ��ǿ�ָ��
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
	reverve_swap(p, p + len - 1); //���������ַ���
	while (*p)
	{
		start = p;
		while ((*p != ' ') && (*p != '\0')) //�ҵ�һ�鵥��
		{
			p++;
		}
		end = p - 1;
		reverve_swap(start, end);//���򵥸�����
		if (*p == ' ') //�ҵ��ո�
			p++;
	}
	return ret;

}
int main()
{
	char arr[] = "student a am I";
	printf("����ǰ��%s\n", arr);
	printf("������%s\n", reverve(arr));
	system("pause");
	return 0;
}
