#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������Ϸ��
//1.���Բ���һ�������������1-100����
//2.�û�����һ����������������бȽϣ����ز´��ˡ���С�ˡ������ˣ�
void game(){
	srand((unsigned)time(NULL));
	int result = rand() % 100 + 1;
	int num = 0;
	while (1){
		printf("��������µ�����");
		scanf("%d", &num);
		if (num < result){
			printf("��С��\n");
		}
		else if (num > result){
			printf("�´���\n");
		}
		else{
			printf("��ϲ�㣡�¶���\n");
			break;
		}
	}
}
void menu(){
	while (1){
		printf("=====================\n");
		printf("       1.��ʼ��Ϸ     \n");
		printf("       2.�˳���Ϸ     \n");
		printf("=====================\n");
	
		printf("���������ѡ��: ");
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 1){
			game();
		}else if (choice == 2){
			break;
		}else{
			printf("���������������������:\n");
		}
	}
}

int main(){
	menu();
	system("pause");
	return 0;
}