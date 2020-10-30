//
// Created by Sakura on 2020/10/30.
//

#include <stdio.h>
#include <stdbool.h>
int FactorialRecursive(int num)
{
    int res;
    if (num < 0)
    {
        printf("输入数据小于0!");
        return false;
    } else if (num == 0 || num == 1)
    {
        res = 1;
    }
    else
    {
        res = FactorialRecursive(num - 1) * num;            //当num>1时,n! = n * (n -1)
    }
    return res;

}


int main(void)
{
    int num;
    printf("输入数字求阶乘:");
    scanf("%d",&num);
    printf("%d的阶乘为:%d",num,FactorialRecursive(num));
}
