#include <stdio.h>
#include <stdlib.h>
3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
 9,19,29,39....   90 92 93...

int main(){
	int count = 0;
	for (int i = 1; i < 100; i++){
		if (i%10 == 9){ //个位有9的数，包括了99
			count += 1;
		}
		if (i/10 == 9){//十位数有9的数，90~98，99在上面已经数过了。
			count += 1;
		}
	}
	printf("出现9的次数为%d次\n", count);
	system("pause");
	return 0;
}