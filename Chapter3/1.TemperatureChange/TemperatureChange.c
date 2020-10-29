//
// Created by Sakura on 2020/10/26.
//

#include <stdio.h>


int main(void)
{
  	float centigrade,fahrenheit;				//centigrade为摄氏温度，fahrenheit为华氏温度
  	centigrade = 64.0f;
  	fahrenheit = (5.0/9)*(centigrade - 32);
  	printf("centigrade = %f fahrenheit = %f",centigrade,fahrenheit);
}