#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)


int Mul()
{
	int a;
	printf("输入a打印a×a乘法口诀表：\n");
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
	printf("\n输入两个数a,b交换他们\n");
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
	printf("输入一个年份判断是不是闰年：\n");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 ==0){
		printf("%d年是闰年", a);
	}
	else 	printf("%d年不是闰年\n\n", a);
	return 0;
}

int Array(){
	int arr[15];
	int a = 15;
	init(arr, a);
	printf("初始化\n");
	for (int i = 0; i < 15; i++){
		printf("%d ", arr[i]);
	}	//初始化
	emply(init(arr,a),a);	//清空
	reverse(init(arr,a),a);	//元素逆置
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
	printf("清空\n");
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
	printf("输出逆置\n");
	for (int i=0; i < a; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

int Primr()
{
	int a;
	printf("输入一个整数\n");
	scanf("%d", &a);
	for (int i=2;i<a;i++){
		if (a%i != 0){
			printf("这是一个素数\n");
			break;
		}
		else printf("这不是素数\n");
		break;
	}
	return 0;
}

int main()
{
	int a;
	printf("#### 1.乘法口诀 #####\n");
	printf("#### 2.交换两个数 ####\n");
	printf("#### 3.判断闰年  #####\n");
	printf("#### 4.操作数组 #####\n");
	printf("#### 5.判断素数 #####\n");
	printf("输入序号选择->：");
	scanf("%d", &a);
	switch (a){
	case(1) : Mul();
		break;		//乘法口诀
	case(2) : Swap();	
		break;//交换两个数
	case(3) : Leap();
		break;//判断闰年
	case(4) : Array();
		break;		//操作数组
	case(5) : Primr(); //判断素数
		break;
	}
	system("pause");
	return 0;
}
