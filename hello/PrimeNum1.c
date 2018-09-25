#include<stdio.h>

//求100-200之间的素数；
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (IsPrime(i))
//		{
//			count++;
//			printf(" %d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}
int IsPrime(int n)  //判断一个数是否为素数
{
	if (n <= 1){
		return 0;
	}
	if (n == 2){
		return 1;
	}
	for (int i = 2; i < n; i++){
		if (n%i == 0) return 0;
	}
	return 1;
}
