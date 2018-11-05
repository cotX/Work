
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

/*打印数组*/
int print(int *p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}
/*交换奇偶顺序*/
int odd()
{
	int arr[] = { 1, 25, 6, 98, 7, 4, 12, 5, 63, 69, 88, 41, 25, 36 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	int *p = arr;
	int *q = &arr[len - 1];
	for (int t; p < q;)
	{
		if ( 0!= *p %2){
			p++;
			continue;
		}
		if (0 == *q %2){
			q--;
			continue;
		}
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	print(arr, len);
}
/*查找数字*/
int Yang()
{
	int arr[3][30] = { 1, 2, 3,
					   2, 3, 4,
				       3, 4, 5 };
	int a;
	printf("输入要查找的数：\n");
	scanf("%d", &a);
	for (int i = 0,j=2;;)
	{
		if (arr[i][j] == a){
			printf("找到了：\n");
			break;
		}
		else if (arr[i][j]>a&&j>=0){
			j--;	
		}
		else if (arr[i][j] < a&&i<3){
			i++;
		}
		else
		{
			printf("没找到\n");
			break;
		}
	}
}
int main()
{ 
	odd();
	Yang();
	system("pause");
	return 0;
}