#if 0
#include "stdio.h"
#include "windows.h"
#pragma warning(disable:4996)


int menu()
{
	printf("######################\n");
	printf("######  1.Play  ######\n");
	printf("######  2.exit  ######\n");
	printf("######################\n");
	return 0;
}
int Play()
{
	int a = rand()%100 +1;
	int b;
	printf("����һ��100�ڵ�������\n");
	while (1)
	{
		scanf("%d", &b);
		if (b > a){
			printf("���ˣ�");
		}
		else if (b < a){
			printf("С�ˣ�");
		}
		else {
			printf("�¶��ˣ�");
			break;
		}
	}
	return 0;
}

int main()
{
	printf("��ѡ��\n");
	menu();
	while (1)
	{
		int input;
		scanf("%d", &input);
		switch (input)
		{
		case(1) : Play();
			break;
		case(2) : return 0;
		default: return 0;
		}
	}
	srand((unsigned)(time(NULL)));
	Play();
	system("pause");
	return 0;
}
#endif