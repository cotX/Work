#include "stdio.h"
#include "windows.h"
#include "math.h"
#pragma warning(disable:4996)


/*�˵�*/
menu()
{
	int a;
	printf("###1.��ת��ֵ###\n");
	printf("###2.��ƽ��###\n");
	printf("### 3.���� ###\n");
	printf("###4.��ⵥ��###\n");
	printf("����ѡ��\n");
	scanf("%d", &a);
	return a;
}
/*��ת��ֵ*/
unsigned int reverse_bit(unsigned int value,int arr[32])
{
	float sum = 0;
	int b = value;
	for (int i = 0; value > 0; i++, value /= 2)
	{
		arr[i] = value % 2;
	}
	printf("%d�Ķ����ƣ�\n",b);
	for ( int i=31; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n��ת��\n");
	for (int i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	for (int i = 0, j=31;i<32; i++,j--)
	{
		sum += arr[i] * pow(2, j);
	}
	return sum;
}
/*��ƽ��*/
void average()
{
	float ave, a, b;
	printf("������������\n");
	scanf("%f%f", &a,&b);
	a = a - b;
	ave = a / 2 + b;	
	printf("ƽ��ֵΪ��%.3f\n", ave);
}
/*swap_1*/
void swap_1(char *p,char *q)
{
	char t;
	for (; p<q; p++, q--)
	{
		t = *p;
		*p = *q;
		*q = t;
	}
}
/*my_strlen*/
int my_strlen(char *p)
{
	int len=0;
	for ( ; *p != '\0'; p++)
	{
		len++;
	}
	return len;
}
/*����*/
void Swap()
{
	char arr[] = { "student a am i" };
	int len = my_strlen(arr);
	char* p = arr ; 
	char* q = &arr[len-1];
	swap_1(p,q);
	p = arr;
	for (char *m = arr ; *(m - 2) != '\0'; m++)
	{
		if (*m == ' '||*m=='\0'){
			q = m-1; 
			swap_1(p, q);
			m++;
			p = m;
		}
	}
	


	for (int i = 0; i < len ; i++)
	{
		printf("%c", arr[i]);
	}
	
}
/*�ڳɶ��м�ⵥ��*/
void Find()
{
	int a;
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int len=sizeof(arr)/sizeof(arr[0]);
	for (int i = 0,count=0; i < len&&count!=1; i++)
	{
		for (int j=i+1; j < len; j++)
		{
			if (0 == (arr[i]^arr[j])){
				break;
			}
			else if (j == len - 1 && arr[i] != arr[j])
			{
				a = arr[i];
				count++;
				break;
			}
		}
	}
	printf("���Գ��ֵ�����Ϊ��%d\n", a);
}

int main()
{
	switch (menu())
	{
	case(1) :
	{
		int a;
		float b;
		int arr[32] = { 0 };
		printf("����һ������\n");
		scanf("%d", &a);
		b = reverse_bit(a, arr);
		printf("ʮ���ƣ�%.0f\n", b);
		break; 
	}
	case(2) : average();
		break;
	case(3) : Swap();
		break;
	case(4) : Find();
		break;
	}
	system("pause");
	return 0;
}