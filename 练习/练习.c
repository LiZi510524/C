#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>         //��1�ӵ�100
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

//����a,b,c���Ƚ����С����Сֵ
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

//ʹ����Ŀ�ȽϷ�����ֵ
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

//�׳��㷨
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

//���ӳ�������
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

//�ж��ǲ�������
//#include<stdio.h>
//int main()
//{
//	int year= 0;
//	printf("������һ�����:");
//	scanf("%d", &year);
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		printf("%d������", year);
//	else
//		printf("%d��������", year);
//	return 0;
//}

//����һ�����²��ж�����µ�����
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
	//int arr1[] = {1,3,5,7,8,10,12};//31��
	//int arr2[] = { 4,6,9,11 }; //30��
	printf("���������£�");
	scanf("%d %d", &year, &month);
	if (is_leap_year == 1)
	{
		if (month == 2)
			printf("%d��%d����29��", year, month);
		else if (month == 4 || month == 6 || month == 9 || month || 11)
			printf("%d��%d��30��", year, month);
		else
			printf("%d��%d��31��", year, month);
	}
	else
	{
		if (month == 2)
			printf("%d��%d����28��", year, month);
		else if (month == 4 || month == 6 || month == 9 || month || 11)
			printf("%d��%d����30��", year, month);
		else
			printf("%d��%d����31��", year, month);
	}
	return 0;
}
