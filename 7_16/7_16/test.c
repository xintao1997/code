#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//完成猜数字游戏。 
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
//		printf("请输入n=");
//		scanf("%d", &n);
//		if (n == r)
//		{
//			flag = 1;
//			break;
//		}
//		else
//		{
//			if (n > r)
//				printf("猜大了，继续\n");
//			else
//				printf("猜小了，继续\n");
//		}
//	}
//	if (1 == flag)
//		printf("你猜对了\n");
//	else
//		printf("三次结束，尚未猜对\n");
//	system("pause");
//	return 0;
//}


//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）

//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int to_find = 4;  //假设要求取4的下标
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{ //用来求数组中元素的个数
//		if (to_find == arr[i]){
//			break;
//		}
//	}
//	//找到了(i<5)
//	if (i == 5)
//	{
//		printf("没有找到预期元素\n");
//	}
//	else{
//		//找到了
//		printf("找到了!下标为 %d\n", i);
//	}
//	system("pause");
//	return 0;
//}



//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
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


//3.编写代码模拟三次密码输入的场景。 最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
#include<string.h>
int main()
{
	int i = 0;
	char arr1[7] = "123456";
	char arr2[10] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		gets(arr2);
		if (0 == strcmp(arr1, arr2))//比较俩个字符串是否相等，strcmp库函数
		{
			printf("登陆成功\n");
			system("pause");
			return 0;
		}
		if (strcmp(arr1, arr2) != 0)
		{
			printf("输入错误\n");
		}
	}
	printf("退出程序\n");
	system("pause");
	return 0;
}