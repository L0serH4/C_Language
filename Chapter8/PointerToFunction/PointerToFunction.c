//
// Created by Sakura on 2020/11/1.
//

#include <stdio.h>

float *search(float (*pointer)[4],int n)        //�β�pointer��ָ��һλ�����ָ�����
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
    printf("����ѧ�����:");
    scanf("%d",&num);
    printf("��%dλѧ���ĳɼ�Ϊ:\n",num);
    p = search(score,num - 1);                  //search����,���ص���score[num][0]�ĵ�ַnum - 1 ѧ����λ���Ǵ�1��ʼ��
    for (i = 0; i < 4; i++)
    {
        printf("%5.2f\t",*(p + i));
    }
    printf("\n");
}