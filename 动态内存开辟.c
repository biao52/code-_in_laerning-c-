#include<stdio.h>
#include<stdlib.h>
int main()
{
	//开辟10个整形空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", p[i]);
	}
	//释放空间
	free(p);;//不会将p自动改成空指针
	p = NULL;
	return 0;
}


int main()
{
	//int* p = (int*)malloc(10 * sizeof(int));//malloc不会初始化开辟的空间
	int* p = (int*)calloc(10,sizeof(int));//而calloc会将开辟的空间初始化为0
	int i = 0;
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}//假设此时开辟的空间不够
	int *p1=(int*)realloc(p, 15 * sizeof(int));//realloc将重新开辟之前开辟的内存块 调整为指定字节大小
	free(p);
	p = NULL;
	return 0;
}



