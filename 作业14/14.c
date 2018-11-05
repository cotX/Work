#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

#define LEN 6

/*旋转数据*/
char *Rotating(char *arr,int a,int len)
{
	char arr_0[LEN] ;
	strcpy(arr_0, arr);
	char arr_1[LEN]; 
	strncpy(arr_1, arr_0, a);
	memmove(arr_0, arr_0 + a, len);
	strncat(arr_0, arr_1, a);
	return arr_0;
	
}
/*判断是否为旋转*/
void Judge(char *arr,int len)
{
	printf("原字符串为：%s\n", arr);
	char find_arr[LEN] = "EABCD";
	printf("查找字符串为：%s\n", find_arr);
	for (int i = 1; i <= len-1; i++){
		if (0 == strcmp(arr, Rotating(find_arr,i,len)))
		{
			printf("%s是%s旋转得到的\n",find_arr,arr);
		}
	}
}

int main()
{
	char arr[] = "ABCDE";
	int len = strlen(arr);
	//Rotating(arr,len);
	Judge(arr,len);
	system("pause");
	return 0;
}
