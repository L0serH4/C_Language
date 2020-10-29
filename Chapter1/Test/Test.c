//
// Created by Sakura on 2020/10/24.
//
#include <stdio.h>


char lower_upper(char c)
{
  	char res;
  	res = c - 32;
  	return res;
}
int main()
{
  	char c;
  	char temp;
  	printf("输入小写字母:");
  	scanf("%c",&c);
	temp = lower_upper(c);
	printf("小写字母%c对应的大写字母为%c",c,temp);
}
