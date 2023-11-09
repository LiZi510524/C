#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>         //从1加到100
//int main()
//{
//	int n = 1;
//	int num = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		num = num + n;
//	}
//	printf("%d", num);
//	return 0;
//}

//输入a,b,c并比较其大小求最小值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int min = 0;
//	scanf("%d %d %d", &a,&b,&c);
//	if (a > b)
//	{
//		min = b;
//		if (min > c)
//			min = c;
//		else
//			min = b;
//	}
//	else
//	{
//		min = a;
//		if (a > c)
//			min = c;
//		else
//			min = a;
//	}
//	printf("%d", min);
//	return 0;
//}

//使用三目比较符求最值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int min = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	min = (a > b ? b : a) > c ? c : (a > b ? b : a);
//	printf("%d", min);
//	return 0;
//
//}

//阶乘算法
//#include<stdio.h>
//int main()
//{
//	int k = 1;
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (k = 1; k <= n; k++)
//	{
//		num = num * k;
//	}
//	printf("%d", num);
//	return 0;
//}

//猴子吃桃问题
//#include<stdio.h>
//int main()    //1 4  10
//{
//	int day = 1;
//	int n = 1;
//	for (day = 1; day <= 9; day++)
//	{
//		n = 2*n + 2;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int day = 1;
//	int n = 10;
//	/*for (n = 10; n>=2; n--)
//	{
//		day = (day + 1) * 2;
//	}
//	printf("%d", day);
//	return 0;*/
//	while (n >= 2)
//	{
//		n--;
//		day = (day + 1) * 2;
//	}
//	printf("%d", day);
//	return 0;
//}

//判断是不是闰月
//#include<stdio.h>
//int main()
//{
//	int year= 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}

//输入一个年月并判断这个月的天数
#include<stdio.h>
int is_leap_year(int year)
{
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	int month = 0;
	//int arr1[] = {1,3,5,7,8,10,12};//31天
	//int arr2[] = { 4,6,9,11 }; //30天
	printf("请输入年月：");
	scanf("%d %d", &year, &month);
	if (is_leap_year == 1)
	{
		if (month == 2)
			printf("%d年%d月有29天", year, month);
		else if (month == 4 || month == 6 || month == 9 || month || 11)
			printf("%d年%d月30天", year, month);
		else
			printf("%d年%d月31天", year, month);
	}
	else
	{
		if (month == 2)
			printf("%d年%d月有28天", year, month);
		else if (month == 4 || month == 6 || month == 9 || month || 11)
			printf("%d年%d月有30天", year, month);
		else
			printf("%d年%d月有31天", year, month);
	}
	return 0;
}
