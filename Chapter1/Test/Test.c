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
  	printf("����Сд��ĸ:");
  	scanf("%c",&c);
	temp = lower_upper(c);
	printf("Сд��ĸ%c��Ӧ�Ĵ�д��ĸΪ%c",c,temp);
}
