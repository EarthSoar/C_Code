#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define arr_length(x) sizeof(x)/sizeof(x[0])
//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� 

//��������
void swap(int* x,int* y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
//��ӡ����
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
//����������ֵ
void ScanfArrays(int arr[], int length){
	for (int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main(){
	int A[5];
	int B[5];

	printf("������5��������A������:");
	ScanfArrays(A, arr_length(A));
	printf("������5��������B������:");
	ScanfArrays(B, arr_length(B));

	printf("����ǰ��A����:");
	PrintArrays(A, arr_length(A));
	printf("����ǰ��B����:");
	PrintArrays(B, arr_length(B));

	//����A��B����
	for (int index = 0; index < 5; index++)
	{
		swap(&A[index],&B[index]);
	}

	printf("�������A����:");
	PrintArrays(A, arr_length(A));
	printf("�������B����:");
	PrintArrays(B, arr_length(B));

	system("pause");
	return 0;
}