//
// Created by Sakura on 2020/10/25.
//
#include <stdio.h>
void student_grade(int grade)
{
  if (grade>=0 && grade<=100){
	switch (grade%10) {
	  case 10:
	  case 9:
		if (grade >= 90 && grade <= 100)
		  printf("A\n");
		break;
	  case 8:
		if (grade >= 80 && grade < 90)
		  printf("B\n");
		break;
	  case 7:
		if (grade >= 70 && grade < 80)
		  printf("C\n");
		break;
	  case 6:
		if (grade >= 60 && grade <70)
		  printf("D\n");
		break;
	  default:
		printf("E");
		break;
  	}
  } else{
    printf("输入成绩范围在0-100");
  }
}

int main()
{
  	int grade;
  	printf("输入学生的成绩:");
  	scanf("%d",&grade);
  	student_grade(grade);
  	return 0;
}
