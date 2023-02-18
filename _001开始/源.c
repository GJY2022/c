#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int sj(void)
{
	return rand();
}

int* we(int* arr, int j,int (*p)(void))
{
	for (int i = 0; i < j; i++)
	{
		arr[i] = p();
		printf("%p\n", arr+i);
	}
	return arr;
}

int main(void)
{
	int a;
	int arr[100];
	
	printf("ÇëÊäÈë\n");
	scanf_s("%d", &a);
	we(arr,a, sj);
	for (int i = 0; i < a; i++)
	{
		printf("%d\n", arr[i]);
	}
	int* p;
	p = we(arr, a, sj);
	for (int i = 0; i < a; i++)
	{
		printf("%p\n", p + i);
	}
	return 0;
}