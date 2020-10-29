
// Created by Sakura on 2020/10/25.

#include <stdio.h>

void count_number()
{
  	int sum = 0;
	for (int i = 100; i <= 300; i++) {
	  sum +=i;
	}
	printf("100-300µÄÀÛ¼ÓÎª:%d",sum);
}

int main()
{
	count_number();
}