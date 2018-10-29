#if 1
#include "stdio.h"
#include "windows.h"

int main()
{
	for (int i = 1; i < 8; i++)
	{
		for (int j = 1; j<= 7 - i; j++)
		{
			printf(" ");
		}
		for (int j=1; j <= 2*i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 6; i >0 ; i--)
	{
		for (int j = 1; j <= 7 - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2*i-1;  j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif