#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996);

int main()
{
	int a, b,c,sum=0;
	int arr[16];
	printf("��������������\n");
	scanf("%d %d", &a,&b);
	c = a^b;
	for (int i=0; c > 0;i++ ,c/=2)
	{
		arr[i]=c%2;
	}

	for (int i = 0; i < 16; i++)
	{
		if (arr[i] == 1)
		{
			sum++;
		}
	}
	printf("%d��%d����%d��bitλ��ͬ\n", a,b,sum);
	system("pause");
	return 0;
}