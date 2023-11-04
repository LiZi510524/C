#define _CRT_SECURE_NO_WARNINGS
//100到200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)           //使用i=101，i+2可以减少循环的次数(两个需同时修改）
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i - 1; j++)
//		{
//			
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  //if应该在for循环外面否则会多打印（打印了50个？？？？）
//		{
//			printf("%d\n", i);
//			count++;//count++需放入在括号内否则是for循环里的次数而不是打印的个数
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//改进
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)   //sqrt函数求开方
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1);
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}                                   ????每次打印了全部，最后未解决（2023.11.3）



//函数写法
//#include<math.h>
//#include<stdio.h>
//int  is_simple_number(int n)
//{
//    int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		if (is_simple_number(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}