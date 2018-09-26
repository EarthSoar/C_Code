---
title: 素数计算
tags: C语言
categories: lang
---



## 1.打印100~200之间的素数

>  素数：当一个数的因子只有1和它本身的时候就是素数。特殊也是最小的质数是2。

<!---more-->

> 分析 ：一般的，拿一个数n(n!=2)除以2，除以3，直达除到n-1，若可以整除，说明n为质数,反之非质数
>
> 当然，也不是一点得除到n-1，其实到n/2都可以了。
>
> 甚至，其实到根号n都可以了。
>
> 还有，除了2偶数都不可能是质数，那直接把偶数排除掉 for(i = 3;i<n/2;i+=2)

```C
#include<stdio.h>

//求100-200之间的素数；
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (IsPrime(i)){
			count++;
			printf(" %d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
int IsPrime(int n)  //判断一个数是否为素数
{
	if (n <= 1){
		return 0;
	}
	if (n == 2){
		return 1;
	}
	for (int i = 2; i < n; i++){
		if (n%i == 0) return 0;
	}
	return 1;
}
```

>  [作为参考](https://blog.csdn.net/PriestessofBirth/article/details/79435124),等到后面研究算法的时候可能有更加优化的方案！



## 2.输出乘法口诀表

>  用一对嵌套for循环可以轻易实现，注意格式化打印

```C
#include <stdio.h>
//打印乘法口诀表
int main()
{
	for (int i = 1; i < 10; i++){
		for (int j = 1 ; j<= i ; j++)
		{
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
```

结果：{% asset_img 乘法口诀表.png  乘法口诀表%}

##  3.判断1000~2000年之间的闰年

>  闰年判断条件：四年一闰，一百年不闰。四百年又一闰。

```c
#include <stdio.h>
//判断1000年---2000年之间的闰年
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
	printf("闰年有%d个\n",count);
	return 0;
}
int IsLeapYear(int year){
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
```

{% asset_img 判断闰年.png  判断闰年 %}