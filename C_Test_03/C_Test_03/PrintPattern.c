#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	int j = 0;
	int k = 0;
	int line = 0; //������
	int Upline = 0; //�ϰ벿������
	int Dline = 0;//�°벿������
	printf("��������Ҫ��ӡ�����ε�������");
	scanf("%d", &line);
	
	Upline = line / 2 - 1;   
	Dline = Upline + 1;
	
	for (i = 0; i <= Upline; i++)
	{
		for (j = 0; j < Upline - i + 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = Dline; i >= 0; i--){
		for ( j = 0; j < Dline - i; j++)
		{
			printf(" ");
		}
		for ( k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}