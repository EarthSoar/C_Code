#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：");
//	scanf("%d,%d", &a,&b);
//	printf("交换前：\n");
//	printf("a = %d\nb = %d\n",a,b);
//	//a = a + b;  
//	//b = a - b; //原来的a
//	//a = a - b;//a减去原来的a就是原来的b
//	//	a 010  //b
//	//	b 101 //
//	//    111 //a
//	a = a^b;
//	b = a^b;//原来的a
//	a = a^b;//a异或原来的a就是原来的b
// 	printf("交换后: \n");
//	printf("a = %d\nb = %d\n", a, b);
//	system("pause");
//	return 0;
//}