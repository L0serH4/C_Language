//
// Created by Sakura on 2020/10/30.
//
#include <stdio.h>
void sort(int *arr,int n)
{
    int i,j,minIndex,temp;
    for (i = 0; i < n -1; i++)
    {
        minIndex = i;                               //ѡȡ��һ��Ԫ�ص�λ��Ϊ��Сֵ������
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;                       //��δ���������Ԫ�����ҵ���СԪ��
            }
        }
        if (i != minIndex)                          //����Сֵ��ѡ������Сֵ��������
        {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}


int main(void)
{
    int arr[10],i;
    for (i = 0; i < 10; i++)
    {
        printf("����%d��Ԫ��:",i + 1);
        scanf("%d",&arr[i]);
    }
    sort(arr,10);
    printf("����������Ԫ��:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}