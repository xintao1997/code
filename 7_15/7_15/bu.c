#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//����������ֵ����
//int main()
//{
//	int a = 7;
//	int b = 5;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//����������ֵ���������üӷ������ǻ���������
//int main()
//{
//	int a = 9;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//����������ֵ����λ���
//int main()
//{
//	int a = 4;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}

//���10�������е����ֵ��
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>arr[0])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//������������С���
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//
//	if(a>b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a>c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b>c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", c,b,a);
//
//	system("pause");
//	return 0;
//}


//�������������Լ�������������ȡģ����ģ��Ϊ0����ֵ������һ��Ϊģ�������������Ϊ0��ģ�Ǽ�Ϊ���Լ����
int main()
{
	int m = 15;
	int n = 12;
	int tmp = 0;

	while(tmp=m%n)
	{
		m = n;
		n = tmp;
	}
	printf("%d\n", n);
	system("pause");

	return 0;
}