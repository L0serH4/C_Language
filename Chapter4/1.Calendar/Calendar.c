//
// Created by Sakura on 2020/10/27.
//

#include <stdio.h>

void calender(int year)
{
  	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
  	{
	  printf("%d��Ϊ����",year);
  	}
  	else
	{
  	  printf("%d��Ϊƽ��",year);
	}
}


int main(void)
{
  	int year;
  	printf("�������:");
  	scanf("%d",&year);
  	calender(year);

}