#include<stdio.h>
//�ж�һ�����Ƿ�Ϊ����
int IsPrime(int n)
{
	if (n <= 1){
		return 0;
	}
	else if (n = 2){
		return 1;
	}
	for (int i = 1; i < n - 1; i++){
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int mian()
{
	IsPrime(100);
		printf("ok!");
	return 0;
}
