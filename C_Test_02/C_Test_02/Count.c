#include <stdio.h>
#include <stdlib.h>
3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
 9,19,29,39....   90 92 93...

int main(){
	int count = 0;
	for (int i = 1; i < 100; i++){
		if (i%10 == 9){ //��λ��9������������99
			count += 1;
		}
		if (i/10 == 9){//ʮλ����9������90~98��99�������Ѿ������ˡ�
			count += 1;
		}
	}
	printf("����9�Ĵ���Ϊ%d��\n", count);
	system("pause");
	return 0;
}