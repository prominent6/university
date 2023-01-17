#include <stdio.h>
typedef struct date{
	int year;
	int month;
	int day;
}DATE;
typedef struct student{
	long studentID;
	char studentName[10];
	char studentSex;
	DATE birthday;
	int score[4];
}STUDENT;
int main(void){
	int i,j,sum[30];
	STUDENT stu[30]={
		{100310121,"xiaowang",'M',{1991,5,19},{72,83,90,82}},
		{100310122,"xiaoli",'M',{1992,8,20},{72,83,90,82}},
		{100310121,"xiaowang",'M',{1991,5,19},{72,83,90,82}},
		{100310121,"xiaowang",'M',{1991,5,19},{72,83,90,82}},						
	}
}
