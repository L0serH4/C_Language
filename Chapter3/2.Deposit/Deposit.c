//
// Created by Sakura on 2020/10/26.
//

#include <stdio.h>

int main(void)
{
  	//定义变量
  	float principal0 = 1000.0f,rate1 = 0.0036f,rate2 = 0.0225f,rate3 = 0.0198f,principal1,principal2,principal3;
  	principal1 = principal0 * (1 + rate1);								//计算活期本息和
  	principal2 = principal0 * (1 + rate2);								//计算一年定期本息和
  	principal3 = principal0 * (1 + rate3 / 2) * (1 + rate3 / 2);		//计算存两次半年定期的本息和
  	printf(" principal1 = %f\n principal2 = %f\n principal3 = %f",principal1,principal2,principal3);
  	char a,b,c;
  	a = getchar();
  	b = getchar();
  	c = getchar();
  	putchar(a);
  	putchar(b);
  	putchar(c);
  	putchar('\n');
}