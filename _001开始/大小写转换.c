#include<stdio.h>

int f7(void)
{
	char c1;
	while (1)
	{
		printf("�������ַ�\n");
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
			printf("��������һ��������ַ�\n");
		}
	}
	return 0;
}