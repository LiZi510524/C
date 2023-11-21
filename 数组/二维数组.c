#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  //
//	int x = 0;
//	for (x = 0; x < 3; x++)
//	{
//		int y = 0;
//		for (y = 0; y < 4; y++)
//		{
//			printf("%d", arr[x][y]); //x为行，y为列  (说反咯）
//		}
//	}
//	return 0;
//}

//冒泡排序
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			int mid = 0;
//			if (arr[n] < arr[j+1])
//			{
//				arr[j+1] = mid;
//				arr[j+1] = arr[n];
//				arr[n] = mid;
//			}
//		}
//		printf("%d", arr[n]);
//	}
//	return 0;
//}

//函数写法
//bubble_sort(int arr[], int sz)                    //传的是指针变量，而不是数组；而指针传的是地址
//{                                                              //数组传参的时候，形参有两种写法
//	int n = 0;                                               //1.指针
//	for (n = 0; n < sz; n++)                        //2.数组
//	{
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			int mid = 0;
//			if (arr[n] < arr[j + 1])
//			{
//				arr[j + 1] = mid;
//				arr[j + 1] = arr[n];
//				arr[n] = mid;
//			}
//		}
//		printf("%d", arr[n]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//需要传参 arr 和 sz;
//	return 0;
//}

//int main()
//{
//	int arr[] [4] = {1,2,3,4,5,6,7,8,9,10,11,12};                       //必须要有行（横着的数量），前面可省略
//	int y = sizeof(arr) / sizeof(arr[0]);                                  //总的除以每行的数量求得列数
//	printf("%d\n", y);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);							  //每行的地址会相差16
//	}
//	return 0;
//}

//数组名确实能表示首元素的地址
//但是有两个例外：
//1.sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示这个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr + 1);   //注意区分不同的代表的意思
//	return 0;
//}