#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
// 找出数组中出现一次的两数
//void find_num(int a[], int len)
//{
//	int i = 0;
//	int ret = 0;     //记录所有值异或的结果
//	int pos = 0;     //记录ret二进制为第一个为1的位置
//	int first = 0;   //将一组值异或存在first，得到1个没有相同数字的值
//	int second = 0;  //将另一组值异或存在second，得到另1个没有相同数字的值
//	//先将所有数异或
//	for (i; i < len; i++)
//	{
//		ret ^= a[i];
//	}
//	//找到ret二进制数第一个为1的数
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	//分组异或
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((a[i] >> pos) & 1))
//		{
//			first ^= a[i];
//		}
//		else
//		{
//			second ^= a[i];
//		}
//	}
//	printf("first = %d\nsecond = %d\n", first, second);
//}
//
//int main()
//{
//	int arr[8] = { 1, 2, 3, 4, 5, 3, 2, 1};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, len);
//	return 0;
//}

//两空瓶子可以换一个汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("可以喝%d瓶饮料\n",total);
//	return 0;
//}

//模拟实现strcpy 
//#include<assert.h>
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(*arr1 != NULL);
//	assert(*arr2 != NULL);
//	int i = 0;
//	for (i = 0; arr1[i] != '\0'; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//	printf("%s  %s\n", arr1, arr2);
//}
//int main()
//{
//	char arr1[] = "abcder";
//	char arr2[] = "ABCDER" ;
//	printf("%s  %s\n", arr1, arr2);
//	my_strcpy(arr1, arr2);
//	return 0;
//}

//模拟实现strcat 
#include<assert.h>
void my_strcat(char* dest, char* src)
{
	char *cp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	printf("%s\n", cp);
}

int main()
{
	char str[32] = "xian";
	char buf[32] = "caijingdaxue";
	my_strcat(str, buf);
	return 0;
}

