//
// Created by Sakura on 2020/11/1.
//

#include <stdio.h>
float *search(float (*pointer)[4])          //�β�pointer��ָ��һλ�����ָ�����
{
    int i = 0;
    float *pt;
    pt = NULL;
    for (; i < 4; i++)
    {
        if (*(*pointer + i) < 60)
        {                                   //pointer����Ϊ��ά������ָ���еĵ�ַ *pointer��pointer��Ϊָ���еĵ�ַ
            pt = *pointer;                  //����пγ̲�����,ʹptָ��score[i][0];

        }
    }
    return pt;
}


int main(void)
{
    float score[3][4] = {{32,67,70,60},{80,59,90,81},{90,99,100,98}};
    float *p;
    int i,j;
    for (i = 0; i < 3; i++)
    {
        p = search(score + i);      //search�����ķ���ֵ�Ƕ�ά������ָ���еĵ�ַ
        if (p == *(score + i))             //����ֵ�Ƕ�ά������ָ���еĵ�ַ,���ܴ�ӡ��Ӧ��ά�����и��е�����
        {
            printf("��%dΪ������ɼ�����:",i + 1);
            for (j = 0; j < 4; j++)
            {
                printf("%5.2f ",*(p + j));  //���score[i][0]-score[i][3]��ֵ
            }
            printf("\n");
        }
    }
}