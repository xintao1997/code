#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
#include"slist.h"

int main(int argc, char *argv[])
{
	SListNode *p = NULL;
	SList mylist;
	SListInit(&mylist);
	bool flag;
	DataType item;
	int pos;
	int select = 1;
	while (select)
	{
			printf("************************************\n");
			printf("* [1] push_back     [2] push_front *\n");
			printf("* [3] show_list     [0] quit_system*\n");
			printf("* [4] pop_back      [5] pop_front  *\n");
			printf("* [6]               [7] find_val   *\n");
			printf("* [8] insert_pos    [9] delete_val *\n");
			printf("* [10]              [11]length     *\n");
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
				printf("请输入要插入的数据(以-1结束):>");
				while (scanf("%d", &item), item != -1)
				{
					SListPushBack(&mylist, item);
				}
				break;
			case 2:
				printf("请输入要插入的数据(以-1结束):>");
				while (scanf("%d", &item), item != -1)
				{
					SListPushFront(&mylist, item);
				}
				break;
			case 3:
				SListShow(&mylist);
				break;
			case 4:
				//SeqListPopBack(&mylist);
				break;
			case 5:
				//SeqListPopFront(&mylist);
				break;
			case 6:
				printf("请输入要查询的位置:>");
				scanf("%d", &pos);
				//printf("要查询的数据:%d\n", SeqListFindByPos(&mylist, pos));
				break;
			case 7:
				printf("请输入要查询的数据:>");
				scanf("%d", &item);
				p = SListFindByVal(&mylist, item);
				if (p == NULL)
					printf("要查询的数据%d不存在.\n", item);
				break;
			case 8:
				printf("请输入要插入的数据:>");
				scanf("%d", &item);
				flag = SListInsertByVal(&mylist,item);
				if (flag)
					printf("插入成功.\n");
				else
					printf("插入失败.\n");
				break;
			case 9:
				printf("请输入要删除的数据:>");
				scanf("%d", &item);
				flag = SListEraseByVal(&mylist, item);
					if (flag)
						printf("删除成功.\n");
					else
						printf("删除失败.\n");
				break;
			case 11:
				printf("SeqList Length = %d\n", SListLength(&mylist));
				break;
			case 12:
				printf("请输入要删除的数据:>");
				scanf("%d", &item);
				SListRemoveAll(&mylist, item);
				break;
			case 13:
				SListReverse(&mylist);
				break;
			case 14:
				SListSort(&mylist);
				break;
			case 15:
				SListClear(&mylist);
				break;
			}
		

		//SListDestroy(&mylist);
	}
	return 0;
}