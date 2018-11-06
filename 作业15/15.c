#include "stdio.h"
#include "windows.h"
#include "assert.h"
#pragma warning(disable:4996)

/*查找两个数字*/
void find()
{
	int a, b;
	int count = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 9, 8, 7, 6, 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i<len&&count<2; i++)
	{
		for (int j = i + 1; j <= len; j++)
		{
			if (arr[i] == arr[j]){
				break;
			}
			else if (j == len &&count == 0){
				a = arr[i];
				count++;
				break;
			}
			else if (j == len  && count == 1){
				b = arr[i];
				count++;
				break;
			}
		}
	}
	printf("这两个数是：%d %d\n", a, b);
}
/*瓶盖*/
void Bottle()
{
	int money,e_bottle,bottle,alone=0;
	printf("输入有多少钱：");
	scanf("%d", &money);
	bottle = money;
	e_bottle = bottle;
	for (; e_bottle >= 1;e_bottle/=2)
	{
		bottle += e_bottle / 2;
		alone += e_bottle % 2;
		if (alone == 2){
			bottle++;
		}
	}
	printf("一共可以有%d瓶汽水", bottle);
}
/*strcpy*/
char* my_strcpy(char* dest,char *src)
{
	char *ret=dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++=*src++){
		;
	}
	return ret;
}
/*strcat*/
char *my_strcat(char* dest, char*src)
{
	char *ret=dest;
	while (*dest){
		dest++;
	}
	while (*dest++=*src++){
		;
	}
	return ret;
}
int main()
{
	//find();
	//Bottle();
	char arr_1[] = "adsfjkl";
	char arr_2[15]= "1234566";
	//printf("%s", my_strcpy(arr_2, arr_1));
	printf("%s", my_strcat(arr_2, arr_1));
	system("pause");
	return 0;
}