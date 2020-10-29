//
// Created by Sakura on 2020/10/29.
//

/**
 * 分数求和
 */
#include <stdio.h>

int main(void)
{
    int sign = 1;
    double denominator = 2.0,sum = 1.0,term;
    while (denominator <= 100)
    {
        sign = - sign;
        term = sign/denominator;
        sum = sum + term;
        denominator = denominator + 1;
    }
    printf("%f",sum);
}