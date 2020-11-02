//
// Created by Sakura on 2020/11/1.
//

#include <stdio.h>

float *search(float (*pointer)[4],int n)        //形参pointer是指向一位数组的指针变量
{
    float *pt;
    pt = *(pointer + n);
    return pt;
}



int main(void)
{
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    float *p;
    int i,num;
    printf("输入学生序号:");
    scanf("%d",&num);
    printf("第%d位学生的成绩为:\n",num);
    p = search(score,num - 1);                  //search函数,返回的是score[num][0]的地址num - 1 学生的位数是从1开始的
    for (i = 0; i < 4; i++)
    {
        printf("%5.2f\t",*(p + i));
    }
    printf("\n");
}