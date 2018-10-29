//最大公约数
#if 0
#include "stdio.h"
#include "stdlib.h"
#pragma warning(disable:4996)
int main()
{
	int a,b,c,max;
	printf("输入两个整数：\n");
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			c = b;
		}
		else c = a;
		for (int i = 1; i < c + 1; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				max = i;
			}
		}
		printf("这两个数的最大公约数是：%d\n", max);
		system("pause");
	return 0;
}
#endif