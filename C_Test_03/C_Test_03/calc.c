#include <stdio.h>
#include <stdlib.h>
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main(){
	int sum = 0;
	int a = 2;
	for (int index = 0; index < 5; index++)
	{
		sum += a;
		a = a * 10 + 2;//递推公式。发现前一项和后一项的关系。
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
