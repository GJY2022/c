#include<stdio.h>

float Average(int arr[],int j)
{
	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum = sum + arr[i];
	}
	float average = (float)sum / 10;
	return average;
}

int f10(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("������\n");
		scanf_s("%d", &arr[i]);
		printf("%d/10\n", i + 1);
	}
	printf("ƽ����Ϊ%f\n", Average(arr, 10));
	return 0;
}