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
        printf("��������С��0!");
        return false;
    } else if (num == 0 || num == 1)
    {
        res = 1;
    }
    else
    {
        res = FactorialRecursive(num - 1) * num;            //��num>1ʱ,n! = n * (n -1)
    }
    return res;

}


int main(void)
{
    int num;
    printf("����������׳�:");
    scanf("%d",&num);
    printf("%d�Ľ׳�Ϊ:%d",num,FactorialRecursive(num));
}
