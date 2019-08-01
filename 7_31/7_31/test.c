#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//实现strcpy
//char* my_strcpy(char* dest, char* str)
//{
//  assert(dest != NULL);
//  assert(str != NULL);
//	char* cp = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return cp;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "ABCD";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//实现strcat
//char* my_strcat(char* dest, char* str)
//{
//  assert(dest != NULL);
//  assert(str != NULL);
//	char *cp = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	*dest = *str;
//	return cp;
//}
//int main()
//{
//	char arr1[20] = "xian";
//	char arr2[] = "caijingdaxue";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//实现strstr
//char* my_strstr(const char* str1,const char*str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;  
//		}
//		if (!*s2)
//		return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcda";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);                                                                                                                             
//	printf("%s\n", ret);
//	return 0;
//
//}

//实现strchr 
//char* my_strchr(const char* str, char c)
//{
//	assert(str != NULL);
//	while (*str)
//	{
//		while (*str && *str != c)
//		{
//			str++;
//		}
//		if (*str == c)
//		return str;
//		str++;
//	}
//	return NULL;
//}
//int main()
// {
//	char arr1[] = "hello world";
//	char c = 'o';
// 	char *ret = my_strchr(arr1, c);
// 	printf("%s\n", ret);
// 	return 0;
// }


//实现strcmp
//int my_strcmp(char *str1, char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 - *str2 > 0)
//		return 1;
//	else if (*str1 - *str2 < 0)
//		return -1;
//
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "acb";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//实现memcpy 


void* my_memcpy(void* dest,const void* str,int a)
{
    assert(dest != NULL);
    assert(str != NULL);
	void* cp = dest;
	while(a--)
	{
		*(char*)dest = *(char*)str;
		((char*)dest)++;
		((char*)str)++;
	}
	return cp;
}
int main()
{
	char arr1[20] = "abcd";
	char arr2[] = "AB";
	int a = 2;
	my_memcpy(arr1, arr2 ,a);
	printf("%s\n", arr1);
	return 0;
}

