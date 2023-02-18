#include<stdio.h>

int MAX(int a, int b)
{
	return a > b ? a : b;
}

int f16(void)
{
	int(*p)(int a, int b) = MAX;
	int a, b, c, d;
	printf("ÇëÊäÈë\n");
	scanf_s("%d %d %d", &a, &b, &c);
	d = MAX(MAX(a, b), c);
	printf("MAXÖµÎª:%d", d);
	return 0;
}