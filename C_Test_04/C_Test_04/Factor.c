#include <stdio.h>
#include <stdlib.h>
//����n�Ľ׳�
int Factor(int n){
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
//����1! + 2! + 3!...+10!
int SUM(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += Factor(i);
	}
	return sum;
}
int main(){
	printf("%d\n",Factor(5));
	printf("%d\n", SUM(10));
	system("pause");
	return 0;
}