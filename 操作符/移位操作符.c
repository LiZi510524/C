#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int unit;

/*int main()
{
	int a = 8;
	a=a <<1 ;                                                                //需要给a赋值才会发生变化，否则本生不会变化
	printf("%d\n", a);  
	//00000000000000000000000000000010 原码       正数的原反补码相同
	//00000000000000000000000000000010 反码
	//00000000000000000000000000000010 补码
	//00000000000000000000000000000100  向左移一位，右边补 0
	a = 8;
	a=a >> 1;
	printf("%d\n", a);
	//00000000000000000000000000000010 原码       正数的原反补码相同
	//00000000000000000000000000000010 反码
	//00000000000000000000000000000010 补码
	//00000000000000000000000000000001 向右移一位, 左边补 0

	//不能移动负数
	// int num=10;
	//num>>-1 error
	return 0;
}
*/

/*int main()
{
	unit Led = 0xff;
	int a = 0;
	int n = 0;
	for (n = 0; n < 8; n++)
	{
		while( a < 8)                               //可以逐渐去1，但后面不能够逐渐增加1
		{
			a++;
			Led >>= 1;
			char s[10];
			_itoa(Led, s, 2);
			printf("%s\n", s);
		}
		Led = 0x80;
		char k[10];
		Led>>=1;                           //未达到效果
		_itoa(Led, k, 2);
		printf("%s\n", k);
	}
	return 0;
}
*/








