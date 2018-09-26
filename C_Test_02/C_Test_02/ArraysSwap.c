#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define arr_length(x) sizeof(x)/sizeof(x[0])
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 

//交换函数
void swap(int* x,int* y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
//打印数组
void PrintArrays(int arr[],int length){
	for (int i = 0; i < length; i++)
	{
		if (i == 0){
			printf("[%d,",arr[0]);
		}
		if (i < length - 1){
			printf("%d,", arr[i]);
		}else{
			printf("%d]", arr[i]);
		}
	}
	printf("\n");
}
//给数组输入值
void ScanfArrays(int arr[], int length){
	for (int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main(){
	int A[5];
	int B[5];

	printf("请输入5个数存于A数组中:");
	ScanfArrays(A, arr_length(A));
	printf("请输入5个数存于B数组中:");
	ScanfArrays(B, arr_length(B));

	printf("交换前的A数组:");
	PrintArrays(A, arr_length(A));
	printf("交换前的B数组:");
	PrintArrays(B, arr_length(B));

	//交换A和B数组
	for (int index = 0; index < 5; index++)
	{
		swap(&A[index],&B[index]);
	}

	printf("交换后的A数组:");
	PrintArrays(A, arr_length(A));
	printf("交换后的B数组:");
	PrintArrays(B, arr_length(B));

	system("pause");
	return 0;
}