//
// Created by Sakura on 2020/10/22.
//

#include <stdio.h>
void BiggestThreeNumber(int num1,int num2,int num3)
{
  	int max;
  	max = num1;
  	if (max < num2)
  	  max = num2;
  	if (max < num3)
  	  max = num3;
  	printf("�������е��������:%d",max);
  	getchar();
}

int main(void)
{
	int num1,num2,num3;
	printf("������������:num1,num2,num3\n");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	BiggestThreeNumber(num1,num2,num3);
}