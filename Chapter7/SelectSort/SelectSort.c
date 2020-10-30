//
// Created by Sakura on 2020/10/30.
//
#include <stdio.h>
void sort(int *arr,int n)
{
    int i,j,minIndex,temp;
    for (i = 0; i < n -1; i++)
    {
        minIndex = i;                               //选取第一个元素的位置为最小值的索引
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;                       //从未排序的数组元素中找到最小元素
            }
        }
        if (i != minIndex)                          //将最小值与选定的最小值发生交换
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
        printf("输入%d个元素:",i + 1);
        scanf("%d",&arr[i]);
    }
    sort(arr,10);
    printf("排序后的数组元素:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}