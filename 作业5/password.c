#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)

int main()
{
	char input[20];
	printf("��������\n");
	for (int i=1; i<4;i++)
	{
		scanf("%s", input);
		if (0 == strcmp(input, "zp2013")){
			printf("��¼�ɹ�\n");
		}
		else {
			if (i == 3){
				printf("�������꣬�˳�����");
				Sleep(1000);
				return 0;
			}
			printf("������󣬻���%d�˻���:\n", 3-i);
		}
	}

	system("pause");
	return 0;
}
#endif 