#include<stdio.h>

typedef struct admon
{
	int i;
	float j;
	char k[10];
	union len
	{
		int cal;
		char lab[10];
	}lk;
}admon;

int f18(void)
{
	admon i;
	scanf("%d %f %s %d", &i.i, &i.j, i.k, &i.lk.cal);
	printf("%d %0.2f %s %d\n", i.i, i.j, i.k, i.lk.cal);
	printf("%d", 9 & 5);
	return 0;
}