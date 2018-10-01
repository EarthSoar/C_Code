///*
//	这个程序从标准输入中读取输入行并在标准输出中打印这些输入行，每个输入行的后面一行是该行内容的一部分
//	输入的第一行是一串标号，串的最后以一个负数结尾。
//	这些标号成对出现，说明需要打印的输入行的列的范围。
//	例如，0 3 10 13 -1 表示第0列到第3列，第10列到第12列的内容被打印
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX_COLS 20      //所能处理的最大列号
//#define MAX_INPUT 1000   //每个输入行的最大长度
//
//int read_column_numbers(int columns[], int max);
//void rearrange(char* output, char const *input, int n_columns, int const columns[]);
//
//int main(void)
//{
//	int n_columns;  //进行处理的列标号
//	int columns[MAX_COLS];//需要处理的列数
//	char input[MAX_INPUT]; //容纳输入行的数组
//	char output[MAX_INPUT];//容纳输出行的数组
//	//读取该串列标号
//	n_columns = read_column_numbers(columns, MAX_COLS);
//	//读取、处理和打印剩余的输入行
//	while (gets(input) != NULL){
//		printf("Origin input : %s\n", input);
//		rearrange(output, input, n_columns, columns);
//		printf("Rearranged line %s\n", output);
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
////读取列表号，如果超出固定范围则不予理会。
//int read_column_numbers(int columns[], int max)
//{
//	int num = 0;
//	int ch;
//	//取得列标号，如果所读取的数小于0则停止。
//	while (num < max&&scanf("%d", &columns[num]) == 1){
//		num += 1;
//	}
//	//确定已经读取的标号为偶数个，因为它们是已成对的形式出现的。
//	if (num % 2 != 0){
//		puts("Last columns number is not paired.");
//		exit(EXIT_FAILURE);
//	}
//	//丢弃该行中最后一个数字的那部分内容
//	while ((ch = getchar() != EOF&&ch != '\n'))
//		;
//	return num;
//}
//
////处理输入行，将指定列的字符连接在一起，输入行以NUL结尾
//
//void rearrange(char* output, char const *input, int n_columns, int const columns[])
//{
//	int col; //columns
//	int output_col;
//	int len;
//
//	len = strlen(input);
//	output_col = 0;
//
//	//处理每对列表号
//	for (col = 0; col < n_columns; col += 2){
//		int nchars = columns[col + 1] - columns[col] + 1;
//		//如果输入行结束或输出行数组已满，就结束任务。
//		if (columns[col] >= len || output_col == MAX_INPUT - 1){
//			break;
//		}
//		//如果输出行结束或输出行数组已满，就结束任务。
//		if (output_col + nchars>MAX_INPUT - 1){
//			nchars = MAX_INPUT - output_col - 1;
//		}
//		//复制相关的数据
//		strncpy(output + output_col, input + columns[col], nchars);
//		output_col += nchars;
//	}
//	output[output_col] = '\0';
//}