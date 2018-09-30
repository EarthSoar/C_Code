#include <stdio.h>
#include <stdlib.h>
//二分搜索（折半查找）：在一个有序的数组中，查找一个元素返回这个元素的数组下标.
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
		printf("没找到这个数！\n");
	}
	else{
		printf("找到了！数组下标为 %d \n", ret);
	}
	system("pause");
	return 0;
}