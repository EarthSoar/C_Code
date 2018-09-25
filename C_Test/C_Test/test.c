#include <stdio.h>
#include<stdlib.h>
int main(void){
	int x, y;
	x = 0;
	while (x < 10){
		y = x*x;
		printf("%d\t%d\n", x, y);
		x += 1;
	}
	system("pause");
	return 0;
}