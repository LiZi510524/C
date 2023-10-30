#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//"1"的下标为0；“10”的下标为9   9/2=4
	int left = 0;
	int key = 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid + 1;//此时mid需要舍去，所以左右有加减1的情况
		}
		else if (arr[mid] < key)
		{
			left = mid - 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("恭喜你，找到了，下标为%d\n", mid);
	}
	else
		printf("找不到\n");
	return 0;
}