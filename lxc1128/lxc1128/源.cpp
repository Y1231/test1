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
	printf("������һ�����֣��ж��Ƿ�Ϊ������");
	scanf_s("%d", &x);
	y = isSuShu(x);
	if (y == 0)
		printf("%d��������\n", x);
	else
		printf("%d������\n", x);

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
	printf("����������������\n");
	scanf_s("%d%d", &m, &n);
	r = gongYuShu(m, n);
	printf("%d��%d�����������Լ���ǣ�%d\n", m, n, r);
	j = gongBeiShu(m, n);
	printf("%d��%d����������С�������ǣ�%d\n", m, n, j);
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
	printf("����������n=");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("�������\n");
	else
		printf("����������%d\n", Monkey(n));
}
