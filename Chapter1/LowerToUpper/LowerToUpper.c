//
// Created by Sakura on 2020/10/25.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * Сдת��Ϊ��д
 * @param c ������ַ�
 * @return ����Сд��Ӧ�Ĵ�д��ĸ
 */
char lower_upper(char c)
{
	char res;
	res = c - 32;
	return res;
}

/**
 * ��дת��ΪСд
 * @param c  ������ַ�
 * @return   ����Сд��Ӧ�Ĵ�д
 */
char upper_lower(char c)
{
	char res;
	res = c + 32;
	return res;
}

/**
 * ��Сд�ַ��໥ת��
 * @param c ������ַ�
 * @return  ת���Ľ��
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
  printf("ת������ַ�Ϊ:%c",r);
}

void change_s(char *s)
{

  int i;
  for (i = 0; s[i] != '\0'; i++)				//�����ַ�����
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
//    printf("����Сд��ĸ:");
//    scanf("%c",&c);
//    temp = lower_upper(c);
//    printf("Сд��ĸ%c��Ӧ�Ĵ�д��ĸ%c",c,temp);

//	printf("�����д��ĸ:");
//	scanf("%c",&c);
//	temp = upper_lower(c);
//	printf("��д��ĸ%c��Ӧ��Сд��ĸ%c",c,temp);

//	printf("����Ӣ���ַ�:");
//	scanf("%c",&c);
//	temp = change_c(c);
//	printf("%c",temp);

	printf("����ת���ַ�:");
	scanf("%c",&c);
	change_c1(c);

//	printf("�����ַ���:");
//	gets(s);
//	change_s(s);
}
