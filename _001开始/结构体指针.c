#include<stdio.h>

int pvz()
{
	return 1;
}
struct Asm
{
	int(*pvz)();
}ert;

int main()
{
	printf("%d", ert.pvz);
}
