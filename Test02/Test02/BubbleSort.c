#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//ð������ÿ�αȽ��������ڵ�Ԫ�أ�������ǵ�˳�����Ͱ����ǽ���������
//�����n ������������ֻ�轫n - 1 ������λ��Ҳ����˵Ҫ����
//n - 1 �˲���������ÿһ�ˡ�����Ҫ�ӵ�1 λ��ʼ���������������ıȽϣ�����С��һ������
//�ں��棬�Ƚ���Ϻ����Ųһλ�����Ƚ����������������Ĵ�С���ظ��˲��裬ֱ�����һ
//����δ��λ�������Ѿ���λ�����������ٽ��бȽ�
int main()
{
	int arr[100];
	int n = 0;//��Ҫ��n������������(��С����)
	int temp = 0;
	printf("��������Ҫ�Լ�������������:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	//ð������:

	//�ȷֿ�д��
	////��һ�ˣ�
	//for (int i = 0; i < n -1; i++)
	//{
	//	if (arr[i]>arr[i + 1]){
	//		temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}
	////�ڶ��ˣ�
	//for (int i = 0; i < n - 2; i++)
	//{
	//	if (arr[i]>arr[i + 1]){
	//		temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}
	////��Ҫ n-1 ��
	////...
	
	
	//�ϲ�������
	for (int times = 1; times <= n - 1; times++){
		for (int i = 0; i < n - times; i++){
			if (arr[i]>arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	//��ӡ�ź��������
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}