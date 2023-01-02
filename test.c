#include<stdio.h>
#include"contact.h"
//①静态版本
//要求通讯录包括1000个人的信息
//1.信息包含名字 电话号码 性别 地址
//2.可以增加/删除/修改/查找指定人的信息
//3.排序人员的信息



//②动态版本
//1.通讯录初始化时添加3个人的信息
//2.不够的时候再增加2个人的信息
void menu()
{
	printf("1.add\n");
	printf("2.dele\n");
	printf("3.search\n");
	printf("4.modify\n");
	printf("5.sort\n");
	printf("6.print\n");
	printf("0.exit\n");
}
enum option
{
	EXIT,
	add,
	dele,
	search,
	modify,
	sort,
	print,
};
int main()
{
	menu();
	int input = 0;
	//创建通讯录
	contact con;
	//初始化通讯录
	initcontact(&con);//函数对通讯录进行初始化 给data申请在堆区上申请连续的空间

	do
	{
		printf("请选择您的需求：\n");
		scanf("%d", &input);
		switch (input)
		{
		case add://增加成员的信息  必须知道通讯录中的本来的人员总数
			addcontact(&con);
			break;
		case dele:
			delecontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case sort:
			break;
		case print:
			printcontact(&con);
			break;
		case EXIT:
			destorycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
		
	} while (input);
	return 0;
}
