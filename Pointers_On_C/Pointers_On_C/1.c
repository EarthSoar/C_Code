#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1.��ȡһ���ַ������������ַ�����department��
//int main(){
//	char department[5];
//	scanf("%s", department);
//	printf("%s", department);
//	system("pause");
//	return 0;
//}

//2.��дһ�����򣬴ӱ�׼�����ȡ�������룬ÿ�����붼Ҫ��ӡ����׼����ϣ�ǰ��Ҫ�����кš�
//��д������ͼ�ó�����������еĳ���û�����ơ�
int main()
{
	int ch;
	int line = 0;
	int at_begining = 1;

	//��ȡ�ַ����������
	while ((ch = getchar()) != EOF){
		//�������λ���е���ʼλ�ã���ӡ�кš�
		if (at_begining == 1){
			at_begining = 0;
			line += 1;
			printf("%d", line);
		}
		//��ӡ�ַ���������β���м��
		putchar(ch);
		if (ch == '\n')
			at_begining = 1;
	}

	system("pause");
	return 0;
}