#include <stdio.h>
#include <stdlib.h>
//��ӡһ�����������м��۵�һ��ͼ��
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