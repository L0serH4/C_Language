//
// Created by Sakura on 2020/10/27.
//

#include <stdio.h>

void calender(int year)
{
  	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
  	{
	  printf("%d年为闰年",year);
  	}
  	else
	{
  	  printf("%d年为平年",year);
	}
}


int main(void)
{
  	int year;
  	printf("输入年份:");
  	scanf("%d",&year);
  	calender(year);

}