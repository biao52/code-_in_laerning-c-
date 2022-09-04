//#include<stdio.h>
//int main(void)
//{
//	int i, j = 0;
//	int a[5] = { 1,2,3,4,5 };
//	int* p = &a[0];
//	//*(p + 2) = 78;//对第三个元素重新赋值
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ",*p++);
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d %d\n", a[i], p[i]);
//		//采用地址+[偏移量]的形式 所以p[i]也可以表示数组的数据
//	}
//	return 0;
//}