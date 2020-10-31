//
// Created by Sakura on 2020/10/31.
//
#include <stdio.h>
void average(float *p,int n)
{
    float* p_end;
    float sum = 0,average;
    p_end = p + n - 1;
    for (; p <= p_end; p++)
    {
        sum = sum + *p;
    }
    average = sum / n;
    printf("平均分=%5.2f\n",average);
}

void search(float (*p)[4],int n)
{
    int i;
    printf("第%d学生的成绩为:",n);
    for (i = 0; i < 4; i++)
    {
        printf("%5.2f ",*(*(p + n) + i));
    }
    printf("\n");
}


int main(void)
{
    int num;
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    average(*score,12);
    printf("输入学生的序号:");
    scanf("%d",&num);
    search(score,num);
}
