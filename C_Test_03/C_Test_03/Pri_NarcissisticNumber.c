#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�����ǡ�õ��ڸ�������

//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
                 
int IsNN(int num){
	int hun = num / 100;
	int dec = (num - hun * 100) / 10;
	int unit = (num - hun * 100 - dec * 10) / 1;
	//int unit = num % 100 % 10;         //"/"ȡ������%��ȡ����
	//int dec = num % 100 / 10;
	if (num == pow(unit, 3) + pow(dec, 3) + pow(hun, 3)){
		return 1;
	}
}
int main(){
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		if (IsNN(i) == 1){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}