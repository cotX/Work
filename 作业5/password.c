#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int main()
{
	char input[20];
	printf("输入密码\n");
	for (int i=1; i<4;i++)
	{
		scanf("%s", input);
		if (0 == strcmp(input, "zp2013")){
			printf("登录成功\n");
		}
		else {
			if (i == 3){
				printf("次数用完，退出程序");
				Sleep(1000);
				return 0;
			}
			printf("密码错误，还有%d此机会:\n", 3-i);
		}
	}

	system("pause");
	return 0;
}
#endif 