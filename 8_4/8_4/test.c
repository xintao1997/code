#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//模拟实现strncay
//char* my_strncpy(char* arr1, char* arr2, int n)
//{
//	assert(arr1 && arr2);
//	while (n && *arr2)
//	{
//		*arr1++ = *arr2++;
//		n--;
//	}
//	return arr1;
//}
//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "ABC";
//	int num = 2;
//	my_strncpy(arr1, arr2,num);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现strcat

//char* my_strncat(char* arr1, char* arr2, int n)
//{
//	assert(arr1 && arr2);
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (n && *arr2)
//	{
//		*arr1++ = *arr2++;
//		n--;
//	}
//	return arr1;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[] = "efg";
//	int num = 2;
//	my_strncat(arr1, arr2, num);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现strncmp

int my_strncmp(const char* arr1,const char* arr2, int n)
{
	assert(arr1 && arr2);
	int ret = 0;
	while (n && !(ret = *arr1 - *arr2) && *arr1)
	{
		arr1++;
		arr2++;
		n--;
	}
	if (ret > 0)
		return 1;
	else if (ret < 0)
		return -1;
	else
		return 0;
}
int main()
{
	char arr1[20] = "aasdf";
	char arr2[] = "aaa";
	int ret = my_strncmp(arr1, arr2, 2);
	printf("%d\n", ret);
	return 0;
}