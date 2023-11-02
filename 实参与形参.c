#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int main()//最初写成了mian导致无法运行，问了张老师才知道，一定要注意拼写 （一个项目中只能包含一个main函数，可能其他文件有所以当时没报错）
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("ÊäÈëÇ°a=%d\nb=%d\n", a, b);
	Swap(&a, &b);
	printf("ÊäÈëºóa=%d\nb=%d\n", a, b);
	return 0;
}
