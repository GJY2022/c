#include<stdio.h>
int f11(void)
{
	int arr = 0;
	int i = 0;
	int info = 0;
	int j = 1;
	printf("�����빲Ҫ���㼸��ֵ\n");
	scanf_s("%d", &i);
	while (i)
	{
		printf("�������%d��ֵ\n", j);
		scanf_s("%d", &info);
		//printf("%d/\n", j);
		arr = arr + info;
		i--;
		j++;
	}
	float Average = arr / (j - 1);
	printf("ƽ����Ϊ:%f\n", Average);
	return 0;
}