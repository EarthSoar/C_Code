#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main(){
	int ch;
	printf("������һ���ַ���");
	while ((ch = getchar()) != EOF){
		if (ch >= 'a'&&ch <= 'z'){
			printf("%c\n",ch-32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}
		else
		{
			;
		}
	}
	system("pause");
	return 0;
}