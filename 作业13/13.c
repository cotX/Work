//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
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

/*��ӡ����*/
int print(int *p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}
/*������ż˳��*/
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