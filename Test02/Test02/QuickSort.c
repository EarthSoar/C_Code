#include <stdio.h>
#include <stdlib.h>
//�ֱ�ӳ�ʼ���С�6 1 2 7 9 3 4 5 10 8�����˿�ʼ��̽�⡱���ȴ���������һ��С��6 �������ٴ���������һ������6 ������Ȼ�󽻻����ǡ��������������
//����i ��j���ֱ�ָ����������ߺ����ұߡ�

//��ʵ�ڱ�j ��ʹ������Ҫ��С�ڻ�׼�����������ڱ�i ��ʹ������Ҫ�Ҵ��ڻ�׼��������ֱ��i ��j ��ͷΪֹ��

/*���������ÿһ�ִ�����ʵ���ǽ���
һ�ֵĻ�׼����λ��ֱ�����е�������λΪֹ������ͽ����ˡ�
*/
void qSort(int left, int right,int arr[])
{
	int i, j, temp, basic;
	if (left > right)
		return;
	i = left;    //�ڱ�i��j�ֱ�ָ��left��right
	j = right;
	basic = arr[left];//��׼��
	while (i != j){
		//�ڱ�j���ߣ�Ҫ��˳����Ϊ�˴����õĻ�׼��������ߵ���
		while (arr[j] >= basic && i < j){//�ڱ�j��ʹ�������ҳ�С�ڻ�׼������
			j--;
		}
		while (arr[i] <= basic && i < j){//�ڱ�i��ʹ�������ҳ����ڻ�׼������
			i++;
		}
		//i��jû����������������ֵ
		if (i < j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//i��j����������׼ֵ��λ.
	//�������˴��� basic = arr[left]  ��basic��ʱ�����һ����ʱ����
	arr[left] = arr[i];
	arr[i] = basic;

	//�ѻ�׼ֵ��λ��ͽ��� ��׼ֵ��ߺͻ�׼ֵ�ұ߲��� �� �ݹ�����
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