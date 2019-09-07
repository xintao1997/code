#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
#include"seqlist.h"

int main(int argc, char *argv[])
{
	SeqList mylist;
	SeqListlnit(&mylist, 8);
	DataType item;
	int select = 1;
	while (select)
	{
		printf("************************************\n");
		printf("* [1] push_back     [2] push_front *\n");
		printf("* [3] show_list     [0] quit_system*\n");
		printf("* [4] pop_back      [5] pop_front  *\n");
		printf("* [6] find_pos      [7] find_val   *\n");
		printf("* [8] insert_pos    [9] delete_val *\n");
		printf("* [10] delete_pos   [11]length     *\n");
		printf("* [12] remove_all   [13] reverse   *\n");
		printf("* [14] sort         [15] clear     *\n");
		printf("************************************\n");
		printf("请选择:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("请输入要尾插入的数据（以-1结束）:");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("请输入要头插入的数据（以-1结束）:");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushFront(&mylist, item);
			}
			break;
		case 3:
			SeqListShow(&mylist);
			break;
		case 4:
			SeqListPopBack(&mylist);
		case 5:
			SeqListPopFront(&mylist);
		case 6:

		}
	}
	return 0;
}



//练习
//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:
//			s += 1;
//		case 2:
//			s += 2;
//		case 3:
//			s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}