#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//void print(int arr[], int right)
//{
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void separate(int arr[], int left, int right)
//{
//	while (left <= right)
//	{
//		if (arr[left] % 2 == 1 && arr[right] % 2 == 0)
//		{
//			left++;
//			right--;
//		}
//		else if(arr[left] % 2 == 1 && arr[right] % 2 == 1)
//		{
//			left++;
//		}
//		else if (arr[left] % 2 == 0 && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		else if(arr[left] %2 ==0 && arr[right] %2 ==1)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	separate(arr, left, right);
//	print(arr, right);
//	return 0;
//}

//���Ͼ��� ��һ����ά����.�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.�������������в���һ�������Ƿ���ڡ�ʱ�临�Ӷ�С��O(N);
//int Findnum(int arr[3][3], int row, int col, int key)
//{
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col))
//	{
//		//����������С��key���������һλ��
//		if (arr[left][right] < key)
//		{
//			left++;
//		}
//		//����������С��key������ǰ��һλ��
//		if (arr[left][right] > key)
//		{
//			right--;
//		}
//		//���������ֵ���key���򷵻�1��
//		if (arr[left][right] == key)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int key = 0;
//	scanf("%d", &key);
//	int ret = Findnum(arr, 3, 3, key);
//	if (1 == ret)
//	{
//		printf("�ҵ��ˣ�\n");
//	}
//	if (0 == ret)
//	{
//		printf("�Ҳ���!\n");
//	}
//	return 0;
//}



//��ӡ�������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j>= 1)
//			    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (m = 0; m < 10-i; m++)
//			printf("  ");
//		for (j = 0; j < i; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}	
//	printf("\n");
//	}
//
//	return 0;
//}


//��������ж�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//						   ((b==2)+(e==4)==1)&&
//						   ((c==1)+(d==2)==1)&&
//						   ((c==5)+(d==3)==1)&&
//						   ((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b,c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//�ж�����
//int main()
//{
//	char killer = 0;
//	for (killer ='a'; killer <='d'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer= %c", killer);
//		}
//	}
//	return 0;
//}

#include<string.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//void left_move(char arr[],int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int len = strlen(arr);
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	printf("%s\n", arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//�ж��Ƿ�����ת���ַ�
char* my_strncat(char *dest, char *stc, int len)
{
	char *cp = dest;
	while (*cp)
		cp++;
	while ((*stc != '\0') && (len--))
		*cp++ = *stc++;
	*cp = '\0';
	return dest;
}
//
//int judge_arr()
//{
//	char str1[10] = "AABCD";
//	char str2[10] = "BCDAA";
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	char *ret = NULL;
//	if (len1 == len2)
//	{
//		my_strncat(str1, str2, len1);
//		ret = strstr(str1, str2);
//		if (ret != NULL)
//			return 1;
//		else
//			return 0;
//	}
//	else
//		return 0;//���Ȳ�ͬ��һ��
//
//}
int judge_arr()
{
	char str1[20] = "AABCD";
	char str2[10] = "BCDAA";
	printf("%s\n", str1);
	printf("%s\n", str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char *ret = NULL;
	//�ж������ַ����Ƿ񳤶�һ��
	if (len1 == len2)
	{
		my_strncat(str1, str1,len1);
		//strstr�����жϺ��溯���ǲ���ǰ�溯�������ַ���
		ret = strstr(str1, str2);
		if (ret != NULL)
			return 1;
		else return 0;
	}
	else return 0;//���Ȳ�һ���Ͳ�������Դ�ַ�����ת��Ľ��
}
int main()
{
	int ret = judge_arr();
	printf("%d\n", ret);
	return 0;
}


