#include<stdio.h>
#include<string.h>

int f19(void)
{
	//getchar ���뵥���ַ�
	char arr[5];
	fgets(arr, 5, stdin);/*��������stdin�����뻺�����ж�ȡ���ַ����ַ�����arr��*/
	//strcpy(arr, "aiud9spid0");
	char std[5] = { 0 };
	memcpy(std, arr, strlen(arr) + 1);
	printf("%s", std);
	return 0;
}