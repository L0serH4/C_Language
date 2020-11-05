//
// Created by Sakura on 2020/11/5.
//
#include <stdio.h>
#define N 3
struct Student										//创建结构体变量
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void input(struct Student stu[])					//实参是指针变量p,形参是结构体数组.传递的是结构体元素的起始地址
{
	int i;
	printf("输入学生信息:学号,姓名,成绩:\n");
  	for (i = 0; i < N; i++)
  	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
  	}
}

struct Student max(struct Student stu[])			//实参是指针变量p,形参是结构体数组,传递的是结构体元素的起始地址,函数的返回值是结构体类型数据
{
  	int i,m = 0;
	for (i = 0; i < N; i++)
  	{
		if (stu[i].aver > stu[m].aver)
		{
		  m = i;
		}
  	}
  	return stu[m];
}

void print(struct Student stud)						//实参是结构体变量(结构体数组元素),形参是结构体变量,传递的是结构体变量中各成员的值
{
  	printf("成绩最高的学生是:\n");
  	printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩为:%6.2f",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}



int main(void)
{
  	struct Student stu[N],*p = stu;
  	input(p);
  	print(max(p));
}