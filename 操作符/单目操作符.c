#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//单目操作符：
//！          逻辑反操作
//-
//+
//&
//sizeof     操作数的类型长度（以字节为单位）
//~            对二进制按位取反
//--           前置、后置
//++         前置、后置
//*            间接访问操作符（解引用操作符）
//(类型）  强制类型转换

//int main()
//{
	/*int flag = 0;
	printf("%d", !flag);*/

	//int a = 3;                
	//printf("%d", ~a);    
	//00000000000000000000000000000011                             
	//11111111111111111111111111111100      补码
	//11111111111111111111111111111011      补码-1
	//10000000000000000000000000000100      原码取反  -4   最前面符号位不变

	//int a = 10;
	//int* p = &a;           //需要画图理解他们之间的关系
	//*p = 20;
	//printf("%d", a);

	//-- ++
	//int a = 4;
	//printf("%d", --a);   //先减1在进行运算 3
	//a = 4;
	//printf("%d", a--);   //先运算再自身减1
	//a = 4; 
	//printf("%d", ++a);
	//a = 4;
	//printf("%d", a--);

	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;                //2 3 3 5
	//i = a++ || ++b || d++;                        //2 3 3 4
	//printf("%d %d %d %d ",a,b,c,d);

	//float pai = 3.14f;
	//int a = (int)pai;       //强制转化为整形
	//printf("%d", a);

		//int a = -10;
		//int* p = NULL;
		//printf("%d\n", !2);
		//printf("%d\n", !0);
		//a = -a;
		//p = &a;
		//printf("%d\n", sizeof(a));
		//printf("%d\n", sizeof(int));
		//printf("%d\n", sizeof a);//这样写行不行？
		//printf("%d\n", sizeof int);//这样写行不行？
	//return 0;
//}


	//void test1(int arr[])
	//{
	//	printf("%d\n", sizeof(arr));//(2)
	//}

	//void test2(char ch[])
	//{
	//	printf("%d\n", sizeof(ch));//(4)
	//}

	//int main()
	//{
	//	int arr[10] = { 0 };
	//	char ch[10] = { 0 };
	//	printf("%d\n", sizeof(arr));//(1)
	//	printf("%d\n", sizeof(ch));//(3)
	//	test1(arr);
	//	test2(ch);
	//	return 0;
	//}


	