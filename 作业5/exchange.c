#if 1
#include "stdio.h"
#include "windows.h"

int main()
{
	char ch;
	printf("输入任意或字符串:\n");
	while (1)
	{
		ch = getchar(); 
		if (ch >= 97 && ch <=122)
		{
			ch -= 32;
			printf("%c", ch);
		}
		else if (ch >= 64 && ch <= 90)
		{
			ch +=32;
			printf("%c", ch);
		}
		else if (ch == '\n'){
			printf("\n输入任意或字符串:\n");
		}
		else printf(" ");
	}
	system("pause");
	return 0;
}
#endif 