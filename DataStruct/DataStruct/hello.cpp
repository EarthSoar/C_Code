#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 100

typedef int ElemType;

typedef struct{
	ElemType* data;	// ָʾ��̬���������ָ��
	int length;	// ������Ԫ�صĸ���
	int maxSize;// ����ĵ�ǰ����
}SeqList;

// ��ʼ��˳���
bool initList(SeqList &L){
	L.data = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
	if (!L.data){
		exit(-1);
	}
	L.maxSize = INIT_SIZE;
	L.length = 0;
	return true;
}

// �������
bool insertList(SeqList &L, int i, ElemType e){
	// ��Ԫ��e���뵽˳���L�еĵ�i��λ�ã�����Ϊi - 1��
	if (i < 1 || i > L.length + 1){   // �ж�i�Ƿ���Ч
		return false;
	}
	if (L.length >= L.maxSize){		// ��ǰ�洢�ռ��Ѿ�����,��ʼ����
		ElemType* newBase = (ElemType*)realloc(L.data, (L.length * 2) * sizeof(ElemType));
		if (!newBase){
			exit(-1);
		}
		L.data = newBase;
		L.maxSize += L.maxSize*2;
	}
	
	for (int j = L.length; j < i; j--){   // ����i��Ԫ������ƶ�
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

// ɾ������
bool deleteList(SeqList &L, int i, ElemType &e){
	// ɾ����i��Ԫ��,��ɾ����Ԫ����e����
	if (i < L.length || i > L.length){
		return false;
	}
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++){
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

// ���Ҳ���
int locateElem(SeqList L, ElemType e){
	// ����ָ��Ԫ�أ�����Ԫ�ص�����λ��
	for (int i = 0; i < L.length; i++){
		if (L.data[i] == e){
			return i + 1;
		}
	}
	return 0;
}

int main(){
	SeqList L;
	initList(L);
	insertList(L,1,22);
	locateElem(L,22);
	system("pause");
	return 0;
}