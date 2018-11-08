#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

#if 0
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

int my_qsort(void *dest, int num, int size_t, int(*cmp)(const void*a, const void* b))
{
	if (*cmp< 0){
		for (int i = 0; i < num; i++)
		{
			for (int j =0, t; j <num-j; j++)
			{
				if (*((int*)dest+j)>*((int*)dest + j+1)){
					t = *(int*)dest;
					*(int*)dest = *((int*)dest + j);
					*((int*)dest + j) = t;
				}
			}
		}
	}
}
int main()
{
	
	system("pause");
	return 0;
}