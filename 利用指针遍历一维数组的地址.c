//#include<stdio.h>
//int main(void)
//{
//	int i,k,j= 0;
//	int a[3] = { 1,2,3};
//	int* p = &a[0];//此处的p是普通的整形指针并不是数组指针也不是指针数组
//	printf("%p %p %p\n", &a[0], &a[1], &a[2]);
//	printf("%p %p %p\n", p, p + 1, p + 2);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p ", p + i);//利用循环打印地址
//	}
//	for (k = 0; k < 3; k++)
//	{
//		printf("%d \n", *(p + k));
//	}
//	for (j = 0; j < 3; j++)
//	{
//		printf("%d ", *p++);//利用自加打印数组
//	}
//	//*p++与*（p++）是一样的
//	return 0;
//}