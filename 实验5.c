#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
int main(int argc, char *argv[]) {
	
	int a[10] = { 1, 3, 2, 5, 4, 7, 9, 6, 8, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	int j;
	int temp;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("冒泡排序结果为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
*/
int main ()
{
	int a[4][4];
	int i, j;
		printf("请输入4x4数组\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{

			scanf("%d", &a[i][j]);
		}
	}
	int b[4][4];
	int *p;
	p = a[0];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			b[i][j] = a[i][j];
		printf("%d", *(p + 4 * i + j));
	}
printf("\n");
for (i = 0;i < 4;i++)
{
	for (j = 0; j < 4; j++)
	{
		
		printf("%d", b[i][j]);
	}
}
printf("\n");
int n;
printf("请输入要查找的二维数组中的元素：\n");
scanf("%d", &n);
for (i = 0; i < 4; i++)
{
	for (j = 0; j < 4; j++)
	{
		if (n == a[i][j])
		{
			printf("a[%d][%d]", i, j);
		}
	}
}
return 0;
}
