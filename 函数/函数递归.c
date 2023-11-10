#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(unsigned int n)   //此处是print而不是printf如果使用printf则会发生错误（真的想哭，看了好多遍都没发现这个问提
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//
//}

 //编写函数不允许创建临时变量，求字符串的长度
 
//#include<stdio.h>
//int my_strlen(char* str)  //通过指针的形式
////int my_strlen(char str[])通过参数部分写出数组的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
