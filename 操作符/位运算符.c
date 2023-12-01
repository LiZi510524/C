#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main()
{
	int num1= 4;     //1000
	int num2 = 5;    //1001
	int a,b,c;
	a = num1&num2;
	b= num1 | num2;
	c= num1 ^ num2;
	printf("%d\n", a);       //    1000
	                                  //&  1001
	                                  //      1000

	printf("%d\n", b);      //      1000
	                                 //  |    1001
	                                 //      1001

	printf("%d\n", c);      //     1000         //按位异或  只有当不同时才 为 1，其他皆为0
	                                 // ^  1001
	                                 //      0001     
	return 0;
}
*/

//不能创建临时变量（第三个变量），实现两个数的交换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//练习：求一个整数存储在内存中的二进制中 1 的个数
//int main()
//{
//	int a = 3;  //00000000000000000000000000000011
//	int n = 0;
//	int count = 0;
//	for (n = 1; n < 33; n++)
//	{
//		if (a & (1 << n))
//		{
//			count++;
//		}
//	}
//	printf("a二进制中 1 的个数为：%d", count);
//}

//int main()
//{
//	int num = 10;
//    int count = 0;//计数
//while (num)
//{
//	if (num % 2 == 1)
//		count++;
//	num = num / 2;
//}
//printf("二进制中1的个数 = %d\n", count);
//return 0;
//}