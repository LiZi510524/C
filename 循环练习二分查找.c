#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//"1"���±�Ϊ0����10�����±�Ϊ9   9/2=4
	int left = 0;
	int key = 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid + 1;//��ʱmid��Ҫ��ȥ�����������мӼ�1�����
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
		printf("��ϲ�㣬�ҵ��ˣ��±�Ϊ%d\n", mid);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}