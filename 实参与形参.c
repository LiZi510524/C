#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int mian()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰa=%d\nb=%d\n", a, b);
	Swap(&a, &b);
	printf("�����a=%d\nb=%d\n", a, b);
	return 0;
}