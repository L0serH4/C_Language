//
// Created by Sakura on 2020/11/1.
//

#include <stdio.h>
float *search(float (*pointer)[4])          //形参pointer是指向一位数组的指针变量
{
    int i = 0;
    float *pt;
    pt = NULL;
    for (; i < 4; i++)
    {
        if (*(*pointer + i) < 60)
        {                                   //pointer本身为二维数组中指向行的地址 *pointer将pointer改为指向列的地址
            pt = *pointer;                  //如果有课程不及格,使pt指向score[i][0];

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
        p = search(score + i);      //search函数的返回值是二维数组中指向行的地址
        if (p == *(score + i))             //返回值是二维数组中指向列的地址,才能打印对应二维数组中该行的数据
        {
            printf("第%d为不及格成绩如下:",i + 1);
            for (j = 0; j < 4; j++)
            {
                printf("%5.2f ",*(p + j));  //输出score[i][0]-score[i][3]的值
            }
            printf("\n");
        }
    }
}