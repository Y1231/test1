//9.输出国际象棋棋盘
/*
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8;j++)
		if ((i + j) % 2 == 0)
			printf("%c%c", 219, 219);
		else
		printf(" ");
		printf("\n");
	}

}
*/

//10.打印楼梯，同时在楼梯上方打印两个笑脸
/*
#include<stdio.h>
int main()
{
	int i, j;
	printf("\1\1\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
			printf("%c%c", 219, 219);
		printf("\n");
	}
}
*/

//11.古典问题：有一对兔子，从出生后第3个月起
//每个月都生一对兔子，小兔子长到第三个月后每个月
//又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
/*
#include<stdio.h>
int main()
{
	long f1, f2;
	int i;
	f1 = f2 = 1;
	for (i = 1; i <= 20; i++)
	{
		printf("%12ld %12ld", f1, f2);
		if (i % 2 == 0) printf("\n");/*控制输出，每行四个
		//f1 = f1 + f2; /*前两个月加起来赋值给第三个月
		//f2 = f1 + f2; /*前两个月加起来赋值给第三个月
	}
}
*/

