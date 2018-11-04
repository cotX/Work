//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6

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
  
int main()
{ 
	odd();
	system("pause");
	return 0;
}