#include <stdio.h>
#include <stdlib.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int main(){
	int sum = 0;
	int a = 2;
	for (int index = 0; index < 5; index++)
	{
		sum += a;
		a = a * 10 + 2;//���ƹ�ʽ������ǰһ��ͺ�һ��Ĺ�ϵ��
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
