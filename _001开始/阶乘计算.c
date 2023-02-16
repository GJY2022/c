#include<stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int sum = 1;
	printf("«Î ‰»Î\n");
	scanf_s("%d", &i);
	for (j = 0; j < i; j++)
	{
		static int k;//
		k = i;
		sum = sum * k;
		k--;
	} 
	printf("%d!=%d\n", j, sum);
	return 0;
}