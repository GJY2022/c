#include<stdio.h>
long long str(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return str(n - 1) + str(n - 2);
}
int main()
{
	/*FILE* file;
	file = fopen("1.txt", "w");
	return 0;*/
	/*int k = 0;
	for(int i=0;i<10;i++)
	{
		for(int i=0;i<10;i++)
		{
			printf("%d", k);
			k++;
		}
	}*/
	printf("%lld\n", str(10));
	return 0;
}