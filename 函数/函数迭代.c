#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n = n * fac(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}

//求第n个斐波那契数列
#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}