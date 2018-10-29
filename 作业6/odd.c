#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int Binary(int n,int arr_[16])
{
	for (int i=0;n>0;n/=2)  //将二进制存到数组中
	{
		arr_[i] = n % 2;
 		i++;
	}
		
	int num_0=1;	
	int num_1;
	for (int *p = &arr_[15], *q = &arr_[0]; p>q; p--) //计算元素个数
	{
		if (*p == 1 && num_0 == 1){
			num_1 = (p + 1) - q;
			num_0++;
			break;
		}
	}	
	return num_1;
}

int main()
{
	int a,num;
	int arr[16] = {0};
	int odd[8] = {0};
	int even[8] = {0};
	printf("输入一个数：\n");
	scanf("%d", &a);
	num=Binary(a,arr);	//获取a的二进制并存到数组arr，位数存入num
	for (int i = 0, j = 0, k = 0; i < 16; i++)	//奇数位
	{
		if (i % 2 == 0){
			even[j] = arr[i];
			j++;
		}
		else {									//偶数位
			odd[k] = arr[i];
			k++;
		}
	}
	printf("二进制:\n");
	for (int j = num; j > 0; j--){//打印二进制
		printf("%d", arr[j-1]);
	}
	printf("\nobb:\n");
	for (int j = num/2; j >0; j--){//打印奇数位
		printf("%d", odd[j-1]);
	}
	printf("\neven:\n");
	for (int j = num/2; j >0; j--){//打印偶数位
		printf("%d", even[j-1]);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif