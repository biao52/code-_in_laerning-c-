#pragma once
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX 1000
#define MAX_ADDR 30
#define MAX_NUM 3
#define ADD 2//增量
//头文件进行类型定义和函数声明
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//类型的定义
typedef struct peoinfor//类型重定义
{
	char name[MAX_NAME];//名字
	char sex[MAX_SEX];
	int age;
	char addr[MAX_ADDR];
	char tele[MAX_TELE];//电话
}peoinfor;


//创建通讯录(静态版本）
//typedef struct contact
//{
//	peoinfor data [MAX];//存放添加的进来的人的信息
//	int sz;//记录当前通讯录的有效信息的个数
//}contact;



//动态版本创建通讯录
typedef struct contact
{
	peoinfor* data;//指向动态开辟的起始地址
	int sz;//记录当前含有的联系人的个数
	int capacity;//记录当前的通讯录的容量
}contact;



//初始化通讯录
void initcontact(contact* pc);
//增加联系人个数
void addcontact(contact* pc);
//打印联系人
void printcontact(const contact*pc);
//删除联系人
void delecontact(contact* pc);
//查找联系人
void searchcontact(const contact* pc);
//修改指定联系人
void modifycontact(contact* pc);
//退出通讯录
void destorycontact(contact* pc);