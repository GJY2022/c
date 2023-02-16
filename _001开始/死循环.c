#include<stdio.h>
int f9(void)
{
	int i = 50;
	while (i)
	{
		i--;
		if (i > 10)
		{
			printf("%d\n", i);
			//continue;
		}
		printf("666  %d\n", i);
	}
	return 0;
}