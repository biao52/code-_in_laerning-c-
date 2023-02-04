#include<stdio.h>
int main(void)
{
	int i, j, k = 0;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
		{
			printf("Hhh\n");
				if (1 == k)
				 {
				break;
			   }
			}
			if (k = 1)
			{
				break;
			}
	}
			if (k = 1)
			{
				break;
			}//break只能跳出当前所在的循环 不能跳出全部的循环
		
	}
	return 0;
}
