#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>          //��ӡ1~10��ֵ
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
//		//break���ڴ˴����0 1 2 3 4 	
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
//		//	continue;    //continue��������� 0 1 2 3 4 
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