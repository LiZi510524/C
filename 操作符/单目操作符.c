#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��Ŀ��������
//��          �߼�������
//-
//+
//&
//sizeof     �����������ͳ��ȣ����ֽ�Ϊ��λ��
//~            �Զ����ư�λȡ��
//--           ǰ�á�����
//++         ǰ�á�����
//*            ��ӷ��ʲ������������ò�������
//(���ͣ�  ǿ������ת��

//int main()
//{
	/*int flag = 0;
	printf("%d", !flag);*/

	//int a = 3;                
	//printf("%d", ~a);    
	//00000000000000000000000000000011                             
	//11111111111111111111111111111100      ����
	//11111111111111111111111111111011      ����-1
	//10000000000000000000000000000100      ԭ��ȡ��  -4   ��ǰ�����λ����

	//int a = 10;
	//int* p = &a;           //��Ҫ��ͼ�������֮��Ĺ�ϵ
	//*p = 20;
	//printf("%d", a);

	//-- ++
	//int a = 4;
	//printf("%d", --a);   //�ȼ�1�ڽ������� 3
	//a = 4;
	//printf("%d", a--);   //�������������1
	//a = 4; 
	//printf("%d", ++a);
	//a = 4;
	//printf("%d", a--);

	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;                //2 3 3 5
	//i = a++ || ++b || d++;                        //2 3 3 4
	//printf("%d %d %d %d ",a,b,c,d);

	//float pai = 3.14f;
	//int a = (int)pai;       //ǿ��ת��Ϊ����
	//printf("%d", a);

		//int a = -10;
		//int* p = NULL;
		//printf("%d\n", !2);
		//printf("%d\n", !0);
		//a = -a;
		//p = &a;
		//printf("%d\n", sizeof(a));
		//printf("%d\n", sizeof(int));
		//printf("%d\n", sizeof a);//����д�в��У�
		//printf("%d\n", sizeof int);//����д�в��У�
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


	