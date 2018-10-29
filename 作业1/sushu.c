
//判断素数

#include "stdio.h"
#include "stdlib.h"
#if 0
int sushu(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a%i != 0)
		{
			continue; 
		}
		else return 0;
	}
	return 1;
}
int main()
{
	printf("100到200内的素数为：\n\n");
	for (int i = 100; i <= 200; i++)
	{
		if (sushu(i) == 1)
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}
#endif