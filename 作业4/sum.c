#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int main()
{
	int a;
	int n;
	int sum=0;
	printf("请输入一个1~9的数：");
	scanf("%d", &a);
	n = a;
	for (int i=1;i<6;i++)
	{
		sum = sum + n;
		n = n * 10 + a;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
#endif 