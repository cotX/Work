
//闰年

#include "stdio.h"
#include "stdlib.h"
#if 0
int main()
{
	printf("1000~2000年之间的闰年：\n\n");
	for (int i = 1000; i <= 2000; i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0))|| i % 400 == 0)
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}
#endif