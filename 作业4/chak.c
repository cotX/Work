#if 0
#include "stdio.h"
#include "windows.h"

int main()
{
	int ch;
	int a = 0;
	for (; (ch = getchar()) != EOF && (ch != '\n');)
	{
		if (ch == '{'){
			a++;
		}
		else if (ch == '}'){
			a--;
		}
	}
	if (a != 0){
		printf("ȱ������\n");
	}
	else {
		printf("������ȷ\n");
	}
	system("pause");
	return 0;
}
#endif