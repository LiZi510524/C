#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"  //ʹ�á���   ԭ���в����  ����Լ��ĺ���
//int add(int x, int y)  //����������   ������������д��ǰ��
//{
//	return x + y;       //�����Ķ���   
//}

//�ɽ� add.h ����������Ϊ��̬�� lib ������˾����ʹ�ú����⣬����������������
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	return 0;
}

