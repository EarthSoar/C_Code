#include <stdio.h>
#include <stdlib.h>
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
int main(){
	double sum = 0.0;
	int flag = 1;
	for (int i = 1; i <= 100; i++)
	{
		//����ǰ������ż��Ϊ���ţ�
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
	printf("�����%lf\n", sum);
	system("pause");
	return 0;
}