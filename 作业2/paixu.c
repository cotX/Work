//排序输出

#if 0
#include "stdio.h"
#include "stdlib.h"
#pragma warning(disable:4996)
int main()
{
	int a, b, c, num_1, num_2, num_3;
	printf("输入三个整数：\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b&&a>c)
	{
		num_1 = a;
		if ("b>c")
		{
			num_2 = b;
			num_3 = c;
		}
		else
		{
			num_2 = c;
			num_3 = b;
		}
	}
	else if (b>a&&b>c)
	{
		num_1 = a;
		if (a>c)
		{
			num_2 = a;
			num_3 = c;
		}
		else
		{
			num_2 = c;
			num_3 = a;
		}
	}
	else if ("c>a&&c>b")
	{
		num_1 = c;
		if ("a>b")
		{
			num_2 = a;
			num_3 = b;
		}
		else
		{
			num_2 = b;
			num_3 = a;
		}
	}
	printf("数字由大到小排列为：%d,%d,%d\n",num_1,num_2,num_3);
	system("pause");
	return 0;
}
#endif