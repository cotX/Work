#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)


int Mul()
{
	int a;
	printf("����a��ӡa��a�˷��ھ���\n");
	scanf("%d", &a);
	for (int i = 1; i < a+1; i++){
		for (int j = 1; j < i+1; j++){
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}

int  Swap()
{
	int a, b,c;
	printf("\n����������a,b��������\n");
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d\n\n", a, b);
	return 0;
}

int Leap()
{
	int a;
	printf("����һ������ж��ǲ������꣺\n");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 ==0){
		printf("%d��������", a);
	}
	else 	printf("%d�겻������\n\n", a);
	return 0;
}

int Array(){
	int arr[15];
	int a = 15;
	init(arr, a);
	printf("��ʼ��\n");
	for (int i = 0; i < 15; i++){
		printf("%d ", arr[i]);
	}	//��ʼ��
	emply(init(arr,a),a);	//���
	reverse(init(arr,a),a);	//Ԫ������
	return 0;
}
int init(int arr[],int a){
	for (int i = 0; i < a; i++){
		arr[i] = i; 
	}

	printf("\n");
	return arr;
}
int emply(int arr[],int a){

	for (int i=0; i < a; i++){
		arr[i] = 0;
	}
	int i = 0;
	printf("���\n");
	for (; i < a; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
int reverse(int arr[],int a){
	int *p = &arr[0];
	int *q = &arr[a-1];
	int t;
	for (; q>p;p++,q--){
		t = *p;
		*p = *q;
		*q = t;
	}
	printf("�������\n");
	for (int i=0; i < a; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

int Primr()
{
	int a;
	printf("����һ������\n");
	scanf("%d", &a);
	for (int i=2;i<a;i++){
		if (a%i != 0){
			printf("����һ������\n");
			break;
		}
		else printf("�ⲻ������\n");
		break;
	}
	return 0;
}

int main()
{
	int a;
	printf("#### 1.�˷��ھ� #####\n");
	printf("#### 2.���������� ####\n");
	printf("#### 3.�ж�����  #####\n");
	printf("#### 4.�������� #####\n");
	printf("#### 5.�ж����� #####\n");
	printf("�������ѡ��->��");
	scanf("%d", &a);
	switch (a){
	case(1) : Mul();
		break;		//�˷��ھ�
	case(2) : Swap();	
		break;//����������
	case(3) : Leap();
		break;//�ж�����
	case(4) : Array();
		break;		//��������
	case(5) : Primr(); //�ж�����
		break;
	}
	system("pause");
	return 0;
}
