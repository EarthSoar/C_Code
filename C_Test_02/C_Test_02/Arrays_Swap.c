#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define arr_length(x) sizeof(x)/sizeof(x[0])
//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� 

int main(){
	int A[5] = {1,2,3,4,5};
	int B[5];

	printf("������5��������A������:");
	for (int i = 0; i < arr_length(A); i++)
	{
		scanf("%d,", &A[i]);
	}
	printf("������5��������B������:");
	for (int j = 0; j < arr_length(B); j++)
	{
		scanf("%d,", &B[j]);
	}
	printf("����ǰ��A����:\n");
	for (int i = 0; i < arr_length(A); i++)
	{
		printf("%d", A[i]);
	}
	printf("����ǰ��B����:\n");
	for (int j = 0; j < arr_length(B); j++)
	{
		printf("%d", &B[j]);
	}

	system("pause");
	return 0;
}