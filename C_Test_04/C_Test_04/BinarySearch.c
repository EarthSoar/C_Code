#include <stdio.h>
#include <stdlib.h>
//�����������۰���ң�����һ������������У�����һ��Ԫ�ط������Ԫ�ص������±�.
int BinSearch(int arr[], int left, int right, int key){
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] < key){
			left = mid + 1;
		}
		else if (arr[mid] > key){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 4, 6, 8 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = BinSearch(arr, left, right, 2);
	if (ret == -1){
		printf("û�ҵ��������\n");
	}
	else{
		printf("�ҵ��ˣ������±�Ϊ %d \n", ret);
	}
	system("pause");
	return 0;
}