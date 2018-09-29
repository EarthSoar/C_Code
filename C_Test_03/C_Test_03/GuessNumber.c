#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏：
//1.电脑产生一个整数随机数（1-100）；
//2.用户输入一个数，跟随机数进行比较，返回猜大了、猜小了、猜中了！
void game(){
	srand((unsigned)time(NULL));
	int result = rand() % 100 + 1;
	int num = 0;
	while (1){
		printf("请输入你猜的数：");
		scanf("%d", &num);
		if (num < result){
			printf("猜小了\n");
		}
		else if (num > result){
			printf("猜大了\n");
		}
		else{
			printf("恭喜你！猜对了\n");
			break;
		}
	}
}
void menu(){
	while (1){
		printf("=====================\n");
		printf("       1.开始游戏     \n");
		printf("       2.退出游戏     \n");
		printf("=====================\n");
	
		printf("请输入你的选择: ");
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 1){
			game();
		}else if (choice == 2){
			break;
		}else{
			printf("你的输入有误！请重新输入:\n");
		}
	}
}

int main(){
	menu();
	system("pause");
	return 0;
}