#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <stdlib.h>

//找出100-200之间的素数
/*int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)     //先找出来100到200的所有整数,都为i
	{
		int j = 0;
		for (j = 2; j<i; j++)      //用i去对除了1和它本身以外的数求余
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}*/


//输出乘法口诀表
/*int main()
{
	int i=0, j=0;
	for (i = 1; i <= 9; i++)//  i控制行数，行数不得大于9
	{
		for (j = 1; j <= i; j++)//  j控制列数，条件j<=i控制第i行的输出列数小于等于i
		   {
			printf("%d*%d=%2d ", j, i, j*i);
			if (i == j)//  判定换行的条件
				printf("\n");
			}
		}
		system("pause");
		return 0;
}*/


//输出1000年-2000年之间的闰年
int main()
{
	int year=0;
	for (year = 1000; year <= 2000; year++)//先找出来1000到2000的所有整数,都为year
	{
		if (year % 400 == 0)               //如果year可以整除400则输出
		{
			printf("%d ", year);           
		}
		else if (year % 4 == 0 && year % 100 != 0)//如果year可以整除4且year不能整除100
		{
			printf("%d ", year);
		}
	}
	system("pause");
	return 0;
}