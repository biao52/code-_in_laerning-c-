#include"contact.h"
#include<string.h>
#include<stdio.h>
//函数的实现
//void initcontact(contact* pc)//初始化通讯录（静态版本）
//{
//	pc->sz = 0;
//	//memset函数：初始化每个字节
//	memset(pc->data, 0, sizeof(pc->data));//每个字节初始化为0  也可以pc->date={0};
//}



void initcontact(contact* pc)//初始化通讯录
{
	pc->data = (peoinfor*)calloc(MAX_NUM,sizeof(peoinfor));
	if (pc->data == NULL)//判断空间是否开辟成功
	{
		perror("initcontact");
		return;
	}
	pc->sz = 0;
	pc->capacity = MAX_NUM;//默认大小改成MAX_NUM
}
//void addcontact(contact* pc)//增加联系人个数（静态版本）
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入名字：");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入性别：");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入年龄：");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入地址：");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("请输入号码：");
//	scanf("%s", pc->data[pc->sz].tele);
//	pc->sz++;
//	printf("增加成功\n");
//}




void addcontact(contact* pc)//增加联系人个数（动态版本）
{
	if (pc->sz == pc->capacity)
	{
		peoinfor* ptr = (peoinfor*)realloc(pc->data, sizeof(peoinfor) * (pc->capacity+ADD));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += ADD;
			printf("增容成功\n");
		}
		else
		{
			perror("addcontact");
			printf("增容失败\n");
			return;
		}
	}
	printf("请输入名字：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入号码：");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("增加成功\n");
}


//打印通讯录
void printcontact(const contact* pc)
{
	printf("%-20s %-4s %-4s %-15s %-12s\n", "名字", "性别", "年龄", "地址", "号码");//-为左对齐
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-4s %-4d %-15s %-12s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}
//查找联系人
static int findbyname(const contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//返回下标
		}
	}
	return -1;//找不到
}
//删除联系人
void delecontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空 无需删除\n");
		return;
	}
	//先查找要删除的人 需要知道有没有这个人
	//先查找
	printf("请输入要删除的人的名字:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (-1 == pos)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除联系人
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}
//查找联系人
void searchcontact(const contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的人的名字\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s %-4s %-4s %-15s %-12s\n", "名字", "性别", "年龄", "地址", "号码");//打印查找的人
		printf("%-20s %-4s %-4d %-15s %-12s\n",
			pc->data[pos].name,
			pc->data[pos].sex,
			pc->data[pos].age,
			pc->data[pos].addr,
			pc->data[pos].tele);
	}
}
//修改联系人
void modifycontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的人的名字\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", pc->data[pos].name);
		printf("请输入性别：");
		scanf("%s", pc->data[pos].sex);
		printf("请输入年龄：");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入地址：");
		scanf("%s", pc->data[pos].addr);
		printf("请输入号码：");
		scanf("%s", pc->data[pos].tele);
		printf("修改成功");
	}

}

//销毁通讯录
void destorycontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}