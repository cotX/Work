#include "stdio.h"
#include "windows.h"
#include "assert.h"
#pragma warning(disable:4996)

/*������������*/
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
	printf("���������ǣ�%d %d\n", a, b);
}
/*ƿ��*/
void Bottle()
{
	int money,e_bottle,bottle,alone=0;
	printf("�����ж���Ǯ��");
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
	printf("һ��������%dƿ��ˮ", bottle);
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