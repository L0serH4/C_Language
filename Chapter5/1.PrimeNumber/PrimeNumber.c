//
// Created by Sakura on 2020/10/28.
//

#include <stdio.h>

int main(void)
{
    int n,i;
    printf("��������:");
    scanf("%d",&n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i < n)
    {
        printf("%d��������!!!\n",n);
    }
    else
    {
        printf("%d������������������",n);
    }

}