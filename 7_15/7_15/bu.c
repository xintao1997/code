#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//交换给定俩值变量
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
//交换给定俩值变量（采用加法，但是会存在溢出）
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
//交换给定俩值，按位异或
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

//求出10个整数中的最大值；
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

//将三个数按大到小输出
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


//求俩个数的最大公约数（将俩数相除取模，若模不为0，则换值，其中一个为模，继续相除，若为0，模是即为最大公约数）
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