#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
// �ҳ������г���һ�ε�����
//void find_num(int a[], int len)
//{
//	int i = 0;
//	int ret = 0;     //��¼����ֵ���Ľ��
//	int pos = 0;     //��¼ret������Ϊ��һ��Ϊ1��λ��
//	int first = 0;   //��һ��ֵ������first���õ�1��û����ͬ���ֵ�ֵ
//	int second = 0;  //����һ��ֵ������second���õ���1��û����ͬ���ֵ�ֵ
//	//�Ƚ����������
//	for (i; i < len; i++)
//	{
//		ret ^= a[i];
//	}
//	//�ҵ�ret����������һ��Ϊ1����
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	//�������
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

//����ƿ�ӿ��Ի�һ����ˮ
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
//	printf("���Ժ�%dƿ����\n",total);
//	return 0;
//}

//ģ��ʵ��strcpy 
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

//ģ��ʵ��strcat 
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

