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
    printf("ƽ����=%5.2f\n",average);
}

void search(float (*p)[4],int n)
{
    int i;
    printf("��%dѧ���ĳɼ�Ϊ:",n);
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
    printf("����ѧ�������:");
    scanf("%d",&num);
    search(score,num);
}
