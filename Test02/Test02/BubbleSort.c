#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//冒泡排序：每次比较两个相邻的元素，如果它们的顺序错误就把它们交换过来。
//如果有n 个数进行排序，只需将n - 1 个数归位，也就是说要进行
//n - 1 趟操作。而“每一趟”都需要从第1 位开始进行相邻两个数的比较，将较小的一个数放
//在后面，比较完毕后向后挪一位继续比较下面两个相邻数的大小，重复此步骤，直到最后一
//个尚未归位的数，已经归位的数则无需再进行比较
int main()
{
	int arr[100];
	int n = 0;//需要对n个数进行排序(从小到大)
	int temp = 0;
	printf("请输入需要对几个数进行排序:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	//冒泡排序:

	//先分开写：
	////第一趟：
	//for (int i = 0; i < n -1; i++)
	//{
	//	if (arr[i]>arr[i + 1]){
	//		temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}
	////第二趟：
	//for (int i = 0; i < n - 2; i++)
	//{
	//	if (arr[i]>arr[i + 1]){
	//		temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}
	////需要 n-1 趟
	////...
	
	
	//合并起来：
	for (int times = 1; times <= n - 1; times++){
		for (int i = 0; i < n - times; i++){
			if (arr[i]>arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	//打印排好序的数组
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}