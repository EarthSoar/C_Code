#include <stdio.h>
//�ж�1000��---2000��֮�������
int main(){
	int count = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (IsLeapYear(i)){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("������%d��\n",count);
	return 0;
}
int IsLeapYear(int year){
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}