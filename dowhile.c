#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//}           Êä³ö0 1 2 3 4


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}    

#include <stdio.h>
int main()
{
	int i = 1;

	do
	{
		if (i==5)
			continue;

		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}
