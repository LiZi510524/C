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
//			printf("%d", arr[x][y]); //xΪ�У�yΪ��  (˵������
//		}
//	}
//	return 0;
//}

//ð������
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

//����д��
//bubble_sort(int arr[], int sz)                    //������ָ����������������飻��ָ�봫���ǵ�ַ
//{                                                              //���鴫�ε�ʱ���β�������д��
//	int n = 0;                                               //1.ָ��
//	for (n = 0; n < sz; n++)                        //2.����
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
//	bubble_sort(arr,sz);//��Ҫ���� arr �� sz;
//	return 0;
//}

//int main()
//{
//	int arr[] [4] = {1,2,3,4,5,6,7,8,9,10,11,12};                       //����Ҫ���У����ŵ���������ǰ���ʡ��
//	int y = sizeof(arr) / sizeof(arr[0]);                                  //�ܵĳ���ÿ�е������������
//	printf("%d\n", y);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);							  //ÿ�еĵ�ַ�����16
//	}
//	return 0;
//}

//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//�������������⣺
//1.sizeof(�����������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr + 1);   //ע�����ֲ�ͬ�Ĵ������˼
//	return 0;
//}