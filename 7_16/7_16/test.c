#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ɲ�������Ϸ�� 
//int main()
//{
//	int r = 0;
//	int flag = 0;
//	int sum = 0;
//	int n = 0;
//	srand((int)time(NULL));
//	r = rand() % 100 + 1;
//	for (flag = 0, sum = 1; sum <= 3 && 0 == flag; sum++)
//	{
//		printf("������n=");
//		scanf("%d", &n);
//		if (n == r)
//		{
//			flag = 1;
//			break;
//		}
//		else
//		{
//			if (n > r)
//				printf("�´��ˣ�����\n");
//			else
//				printf("��С�ˣ�����\n");
//		}
//	}
//	if (1 == flag)
//		printf("��¶���\n");
//	else
//		printf("���ν�������δ�¶�\n");
//	system("pause");
//	return 0;
//}


//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int to_find = 4;  //����Ҫ��ȡ4���±�
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{ //������������Ԫ�صĸ���
//		if (to_find == arr[i]){
//			break;
//		}
//	}
//	//�ҵ���(i<5)
//	if (i == 5)
//	{
//		printf("û���ҵ�Ԥ��Ԫ��\n");
//	}
//	else{
//		//�ҵ���
//		printf("�ҵ���!�±�Ϊ %d\n", i);
//	}
//	system("pause");
//	return 0;
//}



//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//#define n  100
//int main()
//{
//	char number;
//	while (1)
//	{
//		scanf("%c", &number);
//		if (number >= 'A' && number <= 'Z')
//		{
//			printf("%c\n", number + 32);
//		}
//		if (number >= 'a'&&number <= 'z')
//		{
//			printf("%c\n", number - 32);
//		}
//
//	}
//
//	system("pause");
//	return 0;
//
//}


//3.��д����ģ��������������ĳ����� ����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
#include<string.h>
int main()
{
	int i = 0;
	char arr1[7] = "123456";
	char arr2[10] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		gets(arr2);
		if (0 == strcmp(arr1, arr2))//�Ƚ������ַ����Ƿ���ȣ�strcmp�⺯��
		{
			printf("��½�ɹ�\n");
			system("pause");
			return 0;
		}
		if (strcmp(arr1, arr2) != 0)
		{
			printf("�������\n");
		}
	}
	printf("�˳�����\n");
	system("pause");
	return 0;
}