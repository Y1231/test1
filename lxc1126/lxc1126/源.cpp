/*
3.һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
#include<stdio.h>
#include<math.h>
int main()
{
	long int i, x, y;
	for (i = 1; i < 100000; i++)
	{
		x = sqrt( i + 100);
		y = sqrt( i + 268);
	}
	if (x*x == i + 100 && y*y == i + 268)
		printf("\n%ld\n", i);
}
*/
/*
4.����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
#include<stdio.h>
int main()
{
	int day, month, year, sum, leap;
	printf("����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죺");
	scanf_s("%d%d%d", &year, &month, &day);
	switch (month)
	{
	case 1:sum = 0;
		break;
	case 2:sum = 31;
		break;
	case 3:sum = 59;
		break;
	case 4:sum = 90;
		break;
	case 5:sum = 120;
		break;
	case 6:sum = 151;
		break;
	case 7:sum = 181;
		break;
	case 8:sum = 212;
		break;
	case 9:sum = 243;
		break;
	case 10:sum = 273;
		break;
	case 11:sum = 304;
		break;
	case 12:sum = 334;
		break;
	default:printf("data error");
		break;
	}
	sum = sum + day;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		leap = 1;
	else
		leap = 0;
	if (leap = 1 && month > 2)
		sum++;
	printf("���ǵ�%d��", sum);
}
*/

//5.������������x, y, z���������������С�������
/*
#include<stdio.h>
int main()
{
	int x, y, z,t;
	scanf_s("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
//����x,y��ֵ
	}
	if (x > z)
	{
		t = z;
		z = x;
		x = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("˳���ǣ�%d %d %d\n", x, y, z);
}


//6.��*�������ĸC��ͼ��
#include<stdio.h>
int main()
{
	printf("Hello C-world!\n");
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
}


//7.�������ͼ��������c���������У���һ����Very Beautiful!
#include <stdio.h>
int main()
{
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
}
*/


//���9*9�ھ�
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%-3d", i, j, k);
		}
		printf("\n");
	}
}