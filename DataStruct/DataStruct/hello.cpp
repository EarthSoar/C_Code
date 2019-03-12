#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 100

typedef int ElemType;

typedef struct{
	ElemType* data;	// 指示动态分配数组的指针
	int length;	// 数组中元素的个数
	int maxSize;// 数组的当前容量
}SeqList;

// 初始化顺序表
bool initList(SeqList &L){
	L.data = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
	if (!L.data){
		exit(-1);
	}
	L.maxSize = INIT_SIZE;
	L.length = 0;
	return true;
}

// 插入操作
bool insertList(SeqList &L, int i, ElemType e){
	// 将元素e插入到顺序表L中的第i个位置（索引为i - 1）
	if (i < 1 || i > L.length + 1){   // 判断i是否有效
		return false;
	}
	if (L.length >= L.maxSize){		// 当前存储空间已经满了,开始扩容
		ElemType* newBase = (ElemType*)realloc(L.data, (L.length * 2) * sizeof(ElemType));
		if (!newBase){
			exit(-1);
		}
		L.data = newBase;
		L.maxSize += L.maxSize*2;
	}
	
	for (int j = L.length; j < i; j--){   // 将第i个元素向后移动
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

// 删除操作
bool deleteList(SeqList &L, int i, ElemType &e){
	// 删除第i个元素,把删除的元素用e返回
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

// 查找操作
int locateElem(SeqList L, ElemType e){
	// 查找指定元素，返回元素的所在位置
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