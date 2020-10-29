//
// Created by Sakura on 2020/10/29.
//

/**
 * 阶乘
 */
#include <stdio.h>

int main(void)
{
    int num,sum;
    num = 1;
    sum = 2;
    while (num <= 5)
    {
        sum = sum * num;
        num = num + 1;
    }
    printf("%d",sum);
}