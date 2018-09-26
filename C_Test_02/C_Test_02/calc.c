#include <stdio.h>
#include <stdlib.h>
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
int main(){
	double sum = 0.0;
	int flag = 1;
	for (int i = 1; i <= 100; i++)
	{
		//奇数前是正，偶数为负号；
		//if (i%2 == 1){       
		//	sum += 1.0 / i;
		//}
		//if(i%2 == 0)
		//{
		//	sum -= 1.0 / i;
		//}
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("结果是%lf\n", sum);
	system("pause");
	return 0;
}