#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int main()
{
	float sum=0;
	for (int i = 1; i < 101; i++)
	{
		if (i % 2 == 0){
			sum = sum - (1.0 / i);
		}
		else {
			sum = sum + (1.0 / i);
		}
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}

#endif