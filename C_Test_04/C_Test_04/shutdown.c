#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//дһ���ػ�С������һ����֮�����롱����������ȡ���ػ���
int main(){
	char input[10];
	system("shutdown -s -t 60");
	while (1){
		printf("���ĵ��Խ���һ����֮�ڹػ�������������������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0){
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}