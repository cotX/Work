//交换

#if 0
#include <stdio.h>
#include "stdlib.h"
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("输入两个整数：a\n");
	scanf("%d %d",&a, &b);
	c = a;
	a = b;
	b = c;
	printf("交换后：%d,%d\n", a, b);
	system("pause");
	return 0;
}
#endif