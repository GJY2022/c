#include<stdio.h>

long long str6(int i)
{
	static long long j = 1;
	j = j * i;
	return j;
}

int f14(void)
{
	int i = 0;
	long long w = 0;
	printf("������(��������Ϊ20)\n");
	scanf_s("%d", &i);
	for (int k = 1; k <= i; k++)
	{
		w = str6(k);
	}
	printf("%d!=%lld\n", i, w);
	return 0;
}