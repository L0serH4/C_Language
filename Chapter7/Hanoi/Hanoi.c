//
// Created by Sakura on 2020/10/30.
//
#include <stdio.h>

void hanoi(int num,char A,char B,char C)
{
    void move(char x,char y);                   //move函数的声明
    if (num == 1)
    {
        move(A,C);
    }
    else
    {
        hanoi(num - 1,A,B,C);
        move(A,C);
        hanoi(num - 1,B,A,C);
    }
}

void move(char x,char y)

{
    printf("%c-->%c\n",x,y);
}

int main()
{
    int num;
    printf("输入汉诺塔层数:");
    scanf("%d",&num);
    printf("移动%d层汉诺塔的过程\n",num);
    hanoi(num,'A','B','C');
}