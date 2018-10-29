//求最大值

#if 0
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[] = { 11, 55, 87, 4, 65, 22, 145, 45, 45, 5 };
	int max=a[0];
	for (int i = 0; i < 9; i++)
	{
		if (a[i+1]>max)
		{
			max = a[i+1];
		}
	}
	printf("max=%d\n", max);
	system("pause"); 
	return 0;
} 
#endif
