//
// Created by Sakura on 2020/10/25.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * 小写转换为大写
 * @param c 输入的字符
 * @return 返回小写对应的大写字母
 */
char lower_upper(char c)
{
	char res;
	res = c - 32;
	return res;
}

/**
 * 大写转换为小写
 * @param c  输入的字符
 * @return   返回小写对应的大写
 */
char upper_lower(char c)
{
	char res;
	res = c + 32;
	return res;
}

/**
 * 大小写字符相互转换
 * @param c 输入的字符
 * @return  转换的结果
 */
char change_c(char c)
{
    char r;
	if (c >= 'a' && c <= 'z')
	{
	  r = c -32;
	} else if (c >= 'A' && c <= 'Z'){
	  r = c +32;
	}
  	return r;
}

void change_c1(char c)
{
  char r;
  if (c >= 'a' && c <= 'z')
  {
	r = c -32;
  } else if (c >= 'A' && c <= 'Z'){
	r = c +32;
  }
  printf("转换后的字符为:%c",r);
}

void change_s(char *s)
{

  int i;
  for (i = 0; s[i] != '\0'; i++)				//遍历字符数组
  {
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	  s[i] -=32;
	} else if (s[i] >= 'A' && s[i] <= 'Z'){
	  s[i] += 32;
	}
  }
  puts(s);

}
int main()
{
	char c;
	char temp = '\0';
	char s[100];
//    printf("输入小写字母:");
//    scanf("%c",&c);
//    temp = lower_upper(c);
//    printf("小写字母%c对应的大写字母%c",c,temp);

//	printf("输入大写字母:");
//	scanf("%c",&c);
//	temp = upper_lower(c);
//	printf("大写字母%c对应的小写字母%c",c,temp);

//	printf("输入英文字符:");
//	scanf("%c",&c);
//	temp = change_c(c);
//	printf("%c",temp);

	printf("输入转换字符:");
	scanf("%c",&c);
	change_c1(c);

//	printf("输入字符串:");
//	gets(s);
//	change_s(s);
}
