//
// Created by Sakura on 2020/11/1.
//

#include <stdio.h>

int fun(int num1,int num2,int (*p)(int,int))
{
    int result;
    result = (*p)(num1,num2);
    return 0;
}

int max(int num1,int num2)
{
    int max;
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    printf("max = %d",max);
    return max;
}

int min(int num1,int num2)
{
    int min;
    if (num1 < num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }
    printf("min = %d",min);
    return min;
}

int add(int num1,int num2)
{
    int result;
    result = num1 + num2;
    printf("result = %d",result);
    return result;
}


int main(void)
{
    int num1 = 1024,num2 = 128,choice;
    printf("ÊäÈëÑ¡Ôñ1-3:");
    scanf("%d",&choice);
    if (choice == 1)
    {
        fun(num1,num2,max);
    }
    else if(choice == 2)
    {
        fun(num1,num2,min);
    }
    else if (choice == 3)
    {
        fun(num1,num2,add);
    }

}
