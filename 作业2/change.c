//����

#if 0
#include <stdio.h>
#include "stdlib.h"
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("��������������a\n");
	scanf("%d %d",&a, &b);
	c = a;
	a = b;
	b = c;
	printf("������%d,%d\n", a, b);
	system("pause");
	return 0;
}
#endif