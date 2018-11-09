#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

#if 1
/*对int排序*/
int cmp(void *a, void *b)
{
	return *(int*)a < *(int*)b;
}

int main()
{
	printf("输入数组大小：\n");
	int n;
	int *arr;
	scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));
	for (int i = 0; i<n; i++){
		scanf("%d", arr + i);
	}
	qsort(arr, n, sizeof(int), cmp);
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
/*对char排序*/
int cmp(void* a, void*b)
{
	return *(char*)a -*(char*)b;
}

int main()
{
	char a[] = "djfkdjfjd";
	int n=0;
	for (int i=0; a[i] != '\0'; i++){
		n++;
	}
	qsort(a, n, sizeof(char), cmp);
	printf("%s", a);
	system("pause");
	return 0;
}
int cmp(void*a,void*b)
{
	return *(double*)a - *(double*)b;
}

int main()
{
	double a[] = { 23.2, 565.3, 5648.223, 458.1215, 565.56 };
	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(double), cmp);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		printf("%f ", a[i]);
	}
	system("pause");
	return 0;
}
/*结构体比较*/
struct kk{
	int a;
	double b;
	char c;
}arr[20];

int cmp(void* a,void *b)
{
	return (*(struct kk *)a).a - (*(struct kk *)b).a;
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		arr[i].a = i;
	}
	qsort(arr, 20, sizeof(double), cmp);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr[i].a);
	}
	system("pause");
	return 0;
}


#endif
/*qsort实现*/
int cmp(const void*a,const void*b)//提供排序标准
{
	return *(int*)a- *(int*)b;
}
void swap(void *p1, void *p2,int size_t)//交换
{
	for (int k = 0; k < size_t; k++){
		char t = *((char*)p1+k);
		*((char*)p1+k) = *((char*)p2 + k);
		*((char*)p2+k) = t;
	}
}
int my_qsort(void *dest, int num, int size_t, int(*cmp)(void *,void *))
{
		for (int i = 0; i < num-1; i++)
		{
			for (int j =0, t; j <num-1-i; j++)
			{
				if (cmp((char*)dest+j*size_t,(char*)dest+(1+j)*size_t)<0)//判断
				{
					swap((char*)dest + j*size_t, (char*)dest + (1+j)*size_t,size_t);//交换
				}
			}
		}
}

int main()
{
	int a[] = { 12, 35, 987, 56, 32 };
	my_qsort(a,5,sizeof(int),cmp);
	for (int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
