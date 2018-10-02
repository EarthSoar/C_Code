#include <stdio.h>
#include <stdlib.h>
//分别从初始序列“6 1 2 7 9 3 4 5 10 8”两端开始“探测”。先从右往左找一个小于6 的数，再从左往右找一个大于6 的数，然后交换它们。这里可以用两个
//变量i 和j，分别指向序列最左边和最右边。

//其实哨兵j 的使命就是要找小于基准数的数，而哨兵i 的使命就是要找大于基准数的数，直到i 和j 碰头为止。

/*快速排序的每一轮处理其实就是将这
一轮的基准数归位，直到所有的数都归位为止，排序就结束了。
*/
void qSort(int left, int right,int arr[])
{
	int i, j, temp, basic;
	if (left > right)
		return;
	i = left;    //哨兵i和j分别指向left和right
	j = right;
	basic = arr[left];//基准数
	while (i != j){
		//哨兵j先走，要有顺序，因为此处设置的基准数是最左边的数
		while (arr[j] >= basic && i < j){//哨兵j的使命就是找出小于基准数的数
			j--;
		}
		while (arr[i] <= basic && i < j){//哨兵i的使命就是找出大于基准数的数
			i++;
		}
		//i和j没遇到，交换着两个值
		if (i < j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//i和j相遇，将基准值归位.
	//上面有了代码 basic = arr[left]  ，basic这时候就是一个临时变量
	arr[left] = arr[i];
	arr[i] = basic;

	//把基准值归位后就进行 基准值左边和基准值右边部分 的 递归排序
	qSort(left, i - 1, arr);
	qSort(i + 1, right, arr);
}
int main(){
	int arr[] = {6,1,2,7,9,3,4,5,10,8};
	qSort(0,9,arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}