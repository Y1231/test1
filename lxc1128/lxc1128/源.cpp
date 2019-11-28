/*
#include<stdio.h>
 int isSuShu(int i)
{
	int j;
	for (j = 2; j <= i; j++)
	{
		if (i%j == 0)
			return 0;
		else
			return 1;
	}
}
void main()
{
	int x, y;
	printf("请输入一个数字，判断是否为素数：");
	scanf_s("%d", &x);
	y = isSuShu(x);
	if (y == 0)
		printf("%d不是素数\n", x);
	else
		printf("%d是素数\n", x);

}


#include<stdio.h>
int gongYuShu(int a, int b)
{
	int t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (b != 0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}

int gongBeiShu(int a, int b)
{
	return a*b / gongYuShu(a, b);
}
int main()
{
	int m, n,r,j;
	printf("请输入两个整数：\n");
	scanf_s("%d%d", &m, &n);
	r = gongYuShu(m, n);
	printf("%d和%d两个数的最大公约数是：%d\n", m, n, r);
	j = gongBeiShu(m, n);
	printf("%d和%d两个数的最小公倍数是：%d\n", m, n, j);
}
*/


#include<stdio.h>
int Monkey(int n)
{
	int x;
	if (n == 1)
		x = 1;
	else
		x = 2 * (Monkey(n - 1) + 1);
	return x;
}
int Monkey(int n);
int main()
{
	int n;
	printf("输入天数：n=");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("输入错误！\n");
	else
		printf("桃子数量：%d\n", Monkey(n));
}
