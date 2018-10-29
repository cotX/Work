#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)


int one(int dat)
{
	int a[16];
	int i=0,sum=0;
	for (;dat>0;dat/=2){
		a[i] = dat % 2;
		i++;
	}
	for (int j=0;j<16;j++){
		if (a[j]==1)sum++;
	}
	return sum;
}

int main()
{
	int a;
	printf("输入一个数：\n");
	scanf("%d", &a);
	printf("%d中有%d个1\n", a, one(a));
	system("pause");
	return 0;
}
#endif 