#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//桶排序：对于0~100之间的数排序的时候，这时候需要有101个桶（数组长度为101的数组），插个小旗（加一）用来标记每个数出现的次数。
//然后，看这些桶中（遍历这个数组）小旗的数目（多少个1），有多少只旗（多少个1）就（打印多少次这个数）表示这个桶的标号（数）出现了几次；
int main(){
	int book[11];//先拿11个桶，0~10之间的数进行排序。
	int t = 0;
	for (int i = 0; i < 11; i++)
	{
		book[i] = 0; //初始化数组（把桶清空）
	}
	int n = 0;//要对n个数排序
	printf("请输入需要对几个数进行排序：");
	scanf("%d", &n);//输入n个需要排序的数
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);//把数输入到t中
		book[t]++;       //进行计数，第t个桶插加一个旗
	}
	for (int i = 0; i < 11; i++)   //依此判断编号为0~10的桶，（从小到大）。
	{
		for (int j = 0; j < book[i]; j++) //出现几个就打印几次
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}