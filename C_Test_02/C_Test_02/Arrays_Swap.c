#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define arr_length(x) sizeof(x)/sizeof(x[0])
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 

int main(){
	int A[5] = {1,2,3,4,5};
	int B[5];

	printf("请输入5个数存于A数组中:");
	for (int i = 0; i < arr_length(A); i++)
	{
		scanf("%d,", &A[i]);
	}
	printf("请输入5个数存于B数组中:");
	for (int j = 0; j < arr_length(B); j++)
	{
		scanf("%d,", &B[j]);
	}
	printf("交换前的A数组:\n");
	for (int i = 0; i < arr_length(A); i++)
	{
		printf("%d", A[i]);
	}
	printf("交换前的B数组:\n");
	for (int j = 0; j < arr_length(B); j++)
	{
		printf("%d", &B[j]);
	}

	system("pause");
	return 0;
}