#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

#define MAX 5

int main()
{
	int arr1[MAX];
	int arr2[MAX];
	inti(&arr1, &arr2);		//��������
	printf("����ǰ��\n");
	put(&arr1, &arr2);		// �������
	swap(&arr1, &arr2);		// ����
	printf("\n������\n");
	put(&arr1, &arr2);
	system("pause");
	return 0;
}

int inti(int arr_1[MAX],int arr_2[MAX])
{
	printf("��������1��\n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr_1[i]);
	}
	printf("��������2��\n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr_2[i]);
	}

	return 0;
}

int swap(int a_1[MAX], int b_1[MAX])
{
	int t;
	for (int i = 0; i < MAX; i++)
	{
		t = a_1[i];
		a_1[i] = b_1[i];
		b_1[i] = t;
	}
}

int put(int a_1[MAX], int b_1[MAX])
{
	for (int j = 0; j < 5; j++)
	{
		printf("%d ", a_1[j]);
	}
	printf("\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%d ", b_1[j]);
	}
}

#endif