#include <stdio.h>
#include <stdlib.h>
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
void swap(int* x, int* y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
//int main(){
//	int num1 = 2;
//	int num2 = 8;
//	printf("num=%d num=%d\n",num1,num2);
//	swap(&num1, &num2);
//	printf("num=%d num=%d\n",num1,num2);
//	system("pause");
//	return 0;
//}
