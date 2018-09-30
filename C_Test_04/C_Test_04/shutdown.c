#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//写一个关机小程序，在一分钟之内输入”我是猪“，就取消关机。
int main(){
	char input[10];
	system("shutdown -s -t 60");
	while (1){
		printf("您的电脑将在一分钟之内关机，如果你输入我是猪就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0){
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}