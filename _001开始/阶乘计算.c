#include<stdio.h>
int main(void)
{
	int i, j;
	int sum = 1;
	printf("«Î ‰»Î\n");
	scanf_s("%d", &i);
	for (j = 1; j <= i; j++)
	{
		//static int k;
		//k = i;
		sum = sum * j;
	} 
	printf("%d!=%d\n", i, sum);
	return 0;
}