#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1.读取一个字符串，保存在字符数组department中
//int main(){
//	char department[5];
//	scanf("%s", department);
//	printf("%s", department);
//	system("pause");
//	return 0;
//}

//2.编写一个程序，从标准输入读取几行输入，每行输入都要打印到标准输出上，前面要加上行号。
//编写程序试图让程序处理的输入行的长度没有限制。
int main()
{
	int ch;
	int line = 0;
	int at_begining = 1;

	//读取字符并逐个处理
	while ((ch = getchar()) != EOF){
		//如果我们位于行的起始位置，打印行号。
		if (at_begining == 1){
			at_begining = 0;
			line += 1;
			printf("%d", line);
		}
		//打印字符，并对行尾进行检查
		putchar(ch);
		if (ch == '\n')
			at_begining = 1;
	}

	system("pause");
	return 0;
}