//#include<stdio.h>
//int main(void)
//{
//	int a;
//	printf("欢迎使用本系统\n");//提示欢迎
//	while (1)
//	{
//		printf("请输入学生成绩：\n请输入成绩1-100，输入-1退出系统\n");
//		scanf_s("%d", &a);
//		if (-1 == a)
//		{
//			break;
//		}
//		if (a < 0 || a>100)
//		{
//			printf("输入指令非法,请重新输入成绩\n");
//			continue;
//		}
//		if (a < 60)
//		{
//			printf("不合格\n");
//		}
//		else if (a >= 60 && a < 70)
//		{
//			printf("良\n");
//		}
//		else if (a >= 70 && a < 80)
//		{
//			printf("好\n");
//		}
//		else if (a >= 80 && a < 90)
//		{
//			printf("优\n");
//		}
//		else if(a>=90&&a<=100)
//		{
//			printf("牛\n");
//		}
//	}
//	printf("系统推出 感谢使用");
//	return 0;
//}