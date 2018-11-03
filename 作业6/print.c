#if 1
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int main()
{
	char arr[10];
	printf("输入一个整数：\n");
	scanf("%s", &arr);
	for (int i = 0; arr[i] >= 48 && arr[i] < 58; i++){
		
		printf("%c\n",arr[i]);
	}
	system("pause");
	return 0;
}
#endif