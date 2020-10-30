//
// Created by Sakura on 2020/10/30.
//
#include <stdio.h>

void hanoi(int num,char A,char B,char C)
{
    void move(char x,char y);                   //move����������
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
    printf("���뺺ŵ������:");
    scanf("%d",&num);
    printf("�ƶ�%d�㺺ŵ���Ĺ���\n",num);
    hanoi(num,'A','B','C');
}