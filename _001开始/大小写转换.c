#include<stdio.h>

int f7(void)
{
	char c1;
	while (1)
	{
		printf("ÇëÊäÈë×Ö·û\n");
		c1 = getchar();
		getchar();
		if (c1 > 64 && c1 < 91)
		{
			printf("%c\n", c1 + 32);
		}
		else if (c1 > 96 && c1 < 123)
		{
			printf("%c\n", c1 - 32);
		}
		else
		{
			printf("ÄãÊäÈëÁËÒ»¸ö´íÎóµÄ×Ö·û\n");
		}
	}
	return 0;
}