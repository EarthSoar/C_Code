//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////编写代码，模拟用户登录情形，只允许输入三次密码，如果输入正确打印登陆成功，失败则重新输入，三次均错误，提示禁止登录。
int main(){
	char password[] = "123456";//正确密码
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
			printf("密码错误\n");
		}
	}
	if (i == 3){
		printf("密码输入次数达上限，禁止登录！\n");
	}
	else
	{
		printf("登录成功！\n");
	}
	system("pause");
	return 0;
}