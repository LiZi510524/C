#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>          //打印1~10的值
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//		//break放在此处输出0 1 2 3 4 	
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//		//	continue;    //continue放在这输出 0 1 2 3 4 
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}