#if 0
#include"stdio.h"
#include "windows.h"
#include "math.h"

int Judge(int i)
{
	int hun=0;
	int ten=0;
	int one=0;
	int m;
		hun = i / 100;
		ten = (i % 100)/10;
		one = i%10;
	if (m=(pow(hun, 3) + pow(ten, 3) + pow(one, 3))== i){
		return 1;
	}
	 return 0;
}

int main()
{
	int n;
	printf("0~999中的水仙花数有：\n");
	for (int i = 0; i < 1000; i++)
	{
		if (Judge(i) == 1){
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}
#endif