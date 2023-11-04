#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"  //使用“”   原因尚不清楚  添加自己的函数
//int add(int x, int y)  //函数的声明   函数的声明需写在前面
//{
//	return x + y;       //函数的定义   
//}

//可将 add.h 函数库设置为静态库 lib 卖给公司，可使用函数库，但看不到代码内容
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	return 0;
}

