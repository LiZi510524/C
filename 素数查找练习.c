#define _CRT_SECURE_NO_WARNINGS
//100��200֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)           //ʹ��i=101��i+2���Լ���ѭ���Ĵ���(������ͬʱ�޸ģ�
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i - 1; j++)
//		{
//			
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  //ifӦ����forѭ������������ӡ����ӡ��50������������
//		{
//			printf("%d\n", i);
//			count++;//count++������������ڷ�����forѭ����Ĵ��������Ǵ�ӡ�ĸ���
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//�Ľ�
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)   //sqrt�����󿪷�
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1);
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}                                   ????ÿ�δ�ӡ��ȫ�������δ�����2023.11.3��



//����д��
//#include<math.h>
//#include<stdio.h>
//int  is_simple_number(int n)
//{
//    int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		if (is_simple_number(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}