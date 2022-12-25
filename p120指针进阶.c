#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//int main()//冒泡排序
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubblesort(arr, sz);
//	print(arr, sz);
//	return 0;
//}





struct stu
{
	char name[20];
	int age;
};
int sort_byname(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[3] = { {"zhangshan",20},{"lisi",32},{"wangwu",23} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), sort_byname);
}

int com_int(const void* e1, const void* e2)
{
	return *(int*)e1- *(int*)e2;
}
void test1()//使用qsort函数实现
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), com_int);
	print(arr, sz);

}
int sort_byage(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	struct stu s[3] = { {"zhangshan",20},{"lisi",32},{"wangwu",23} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), sort_byage);
}
int main()//结构体qsort
{
	test1();
	test2();
	test3();
}