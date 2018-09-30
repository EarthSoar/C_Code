#include <stdio.h>
#include <stdlib.h>
//打印一个从两边向中间汇聚的一个图案
//H#########d
//He#######ld
//Hel#####rld
//Hell###orld
//Hello#World
//Hello World


int main(){
	char a[] = "Hello World";
	char b[] = "###########";
	int left = 0;
	int right = strlen(a) - 1;
	while (left <= right){
		b[left] = a[left];
		b[right] = a[right];
		left++;
		right--;
		printf("%s\n", b);
	}
	system("pause");
	return 0;
}