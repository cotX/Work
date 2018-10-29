#if 0
#include "stdio.h"
#include "windows.h"

int main()
{
	int sum=0;
	for (int i = 1; i < 101; i++)
	{
		if ((i+1)%10==0||i/10==9)
		{
			sum ++;
			if ((i + 1) % 10 == 0 && i / 10 == 9) sum++;
		}
	}
	printf("%d", sum);

	system("pause");
	return 0;
}

#endif