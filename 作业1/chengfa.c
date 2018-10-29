
//乘法口诀
#include "stdio.h"
#include "stdlib.h"
#if 0
int main()
{
	printf("9×9乘法口诀表：\n\n");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d×%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif 
