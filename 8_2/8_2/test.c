#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//左移k个字符
//void revers(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	revers(arr, arr + k - 1);
//	revers(arr + k, arr + len - 1);
//	revers(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//
//}


//判断是否是移动后的字符串

//int my_left_num(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[] = "cdba";
//	if (my_left_num(arr1, arr2) == 1)
//		printf("是\n");
//	else
//		printf("否\n");
//	return 0;
//}


//找出数组中不相同的俩个数

//void find_two_diff_num(int arr[], int sz, int* num1, int* num2)
//{
//	int i = 0;
//	int ret = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			tmp = i;
//		break;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> tmp) & 1) == 1)
//			*num1 ^= arr[i];
//	}
//	*num2 = ret ^ *num1;
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_two_diff_num(arr, len, &num1, &num2);
//	printf("num1= %d  num2 = %d", num1, num2);
//	return 0;
//}


//2空瓶换饮料

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数。
//递归
//int fib(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return fib(num - 1) + fib(num - 2);
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	fib(num);
//	printf("%d\n", fib(num));
//	return 0;
//}

//非递归

//int main()
//{
//	int num = 0;
//	int c = 1;
//	int a = 1;
//	int b = 1;
//	scanf("%d", &num);
//	if (num <= 2)
//		printf("%d\n", 1);
//	else
//	{
//		while (num > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			num--;
//		}
//		printf("%d\n", c);
//	}
//
//}
//
//编写一个函数实现n^k，使用递归实现

//int ride(int a, int b)
//{
//	if (a == 0)
//		return 0;
//	else if (a == 1)
//		return 1;
//	else if (b == 0)
//		return 1;
//	else if (b == 1)
//		return a;
//	else
//		return a*ride(a, b - 1);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	printf("%d\n", ride(a, b));
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，

//int DigitSum(int n)
//{
//	int tmp = 0;
//	int sum = 0;
//	if (n != 0)
//	{
//       tmp = n % 10;
//	   n = n / 10;
//	   sum = tmp + DigitSum(n);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

//void reverse_string(char * string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}


//递归和非递归分别实现strlen 
//非递归

//int my_strlen(char* arr)
//{
//	int cont = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		cont++;
//	}
//	return cont;
//}
//int main()
//{
//	char arr[] = "acsdsc";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//递归

//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//   
//}
//int main()
//{
//	char arr[] = "acsdsc";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//递归和非递归分别实现求n的阶乘 
//
//int ride_num(int n)//非递归
//{
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int n_ride_num(int n)//递归
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * n_ride_num(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("非递归>%d\n", ride_num(n));
//	printf("递归>%d\n", n_ride_num(n));
//	return 0;
//}


//递归方式实现打印一个整数的每一位 

void print(int a)
{
	int m = 0;
	if (a < 10)
	{
	   printf("%d ", a);
	}
	else
	{
		m = a % 10;
		a = a / 10;
		print(a);
		printf("%d ", m);
	}

}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}