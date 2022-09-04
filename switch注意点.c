/*#include<stdio.h> 
int main(void)
{
	int order = 2;
	switch (order)//此处不能有分号 该条件表达式必须是整形表达式 此处的order必须为整数
	{
	case 1://此处case 与1之间必须有空格
		printf("1");
		break;//break不能少
	case 2://与指令相匹配的case才是代码的执行起点
		printf("2");
		break;//注意循环内部有switch switch内有break，则break只跳出break，不跳出循环
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	default://当无法与之前的case匹配时 则执行default 有时default也可不写
		printf("5");
	}
	return 0;
}*/
