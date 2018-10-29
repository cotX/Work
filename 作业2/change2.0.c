//交换2.0

#if 0
#include "stdio.h"
#include "stdlib.h"
#pragma warning(disable:4996)

int main()
{
	int a, b;
	printf("输入两个整数：\n");
	scanf("%d %d", &a, &b);
	a ^= b;
	b = a^b;
	a = a^b;


	printf("%d,%d\n",a, b);
	system("pause");
	return 0;
}

#endif