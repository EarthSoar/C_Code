//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////��д���룬ģ���û���¼���Σ�ֻ���������������룬���������ȷ��ӡ��½�ɹ���ʧ�����������룬���ξ�������ʾ��ֹ��¼��
int main(){
	char password[] = "123456";//��ȷ����
	char input[] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("Please input your password :");
		scanf("%s", input);
		if (strcmp(input, password) == 0){
			break;
		}
		else{
			printf("�������\n");
		}
	}
	if (i == 3){
		printf("����������������ޣ���ֹ��¼��\n");
	}
	else
	{
		printf("��¼�ɹ���\n");
	}
	system("pause");
	return 0;
}