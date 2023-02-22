#include<stdio.h>
#include<string.h>

typedef enum Day
{
	one=1,
	two,
	three,
	four	
}Day;

int main(int argc, char* argv[])
{
	Day day;
	scanf_s("%d", &day);
	printf("%d\n",day);
	switch (day)
	{
	case one:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	case 4:
		printf("four\n");
		break;
	default:
		printf("ÊäÈë´íÎó\n");
	}
	return 0;
}