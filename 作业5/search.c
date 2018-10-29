#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)
int main()
{
	int arr[20];
	int input_1,input_2;
	int mid;
	int left = 0; 

	printf("输入20以内数组长度：\n");
	scanf("%d", &input_1);
	for (int i = 0; i < input_1; i++)
	{
		arr[i] = i+1;
	}

	int right = sizeof(arr) / sizeof(arr[0])-1;
	printf("输入想要查找的数字：\n");
	scanf("%d", &input_2);
	while (left<=right){
		mid = (left+right)/ 2;
		if (arr[mid]>input_2){
			right = mid - 1;
		}
		else if (arr[mid] < input_2){
			left = mid + 1;
		}
		else break;
	}
	if (left <= right){
		printf("找到了\n,下标为%d",mid);
	}
	else printf("找不到");
	system("pause");
	return 0;
}

#endif