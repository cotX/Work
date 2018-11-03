#include "stdio.h"
#include "windows.h"
#pragma warning(disable :4996)
#define ROW 5
#define COL 5

/*名次*/
void NO()
{
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++)
		{
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if (1 == (2 == b) + (3 == a) &&
							1 == (2 == b) + (4 == e) &&
							1 == (1 == c) + (2 == d) &&
							1 == (5 == c) + (3 == d) &&
							1 == (4 == e) + (1 == a) &&
							120 == (a*b*c*d*e)
							)
						{
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return ;
}
/*凶手*/
void killer()
{
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			for (int c = 0; c < 2; c++)
			{
				for (int d = 0; d< 2; d++)
				{
					if (3 ==( (a == 0) + (c == 1) + (d == 1) + (d == 0))&&1==a+b+c+d)
					{
						printf("a:%d b:%d c:%d d:%d",a,b,c,d);
					}
				}
			}
		}
	}
	return 0;
}
/*杨辉*/
void yang()
{
	int arr[ROW][COL] ;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = 1;
		}
	}
	for (int i = 0; i < ROW; i++)
	{	//打空格
		for (int k = 0; k < ROW-1 - i; k++)
		{
			printf(" ");
		}
		//打印值
		for (int j = 0; j <= i; j++)
		{
			if (i>1&&j>0&&j<i){
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%d", arr[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	NO();
	killer();
	yang();
	system("pause");
	return 0;
}
