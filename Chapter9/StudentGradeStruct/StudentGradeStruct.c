//
// Created by Sakura on 2020/11/5.
//
#include <stdio.h>
#define N 3
struct Student										//�����ṹ�����
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void input(struct Student stu[])					//ʵ����ָ�����p,�β��ǽṹ������.���ݵ��ǽṹ��Ԫ�ص���ʼ��ַ
{
	int i;
	printf("����ѧ����Ϣ:ѧ��,����,�ɼ�:\n");
  	for (i = 0; i < N; i++)
  	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
  	}
}

struct Student max(struct Student stu[])			//ʵ����ָ�����p,�β��ǽṹ������,���ݵ��ǽṹ��Ԫ�ص���ʼ��ַ,�����ķ���ֵ�ǽṹ����������
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

void print(struct Student stud)						//ʵ���ǽṹ�����(�ṹ������Ԫ��),�β��ǽṹ�����,���ݵ��ǽṹ������и���Ա��ֵ
{
  	printf("�ɼ���ߵ�ѧ����:\n");
  	printf("ѧ��:%d\n����:%s\n���ſγɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ�Ϊ:%6.2f",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}



int main(void)
{
  	struct Student stu[N],*p = stu;
  	input(p);
  	print(max(p));
}