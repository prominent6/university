////传入为指针时用箭头
//
//
//typedef struct student{
//	long studentID;
//	char studentName[10];
//	char studentSex;
//	int yearOfBirth;
//	int score[4];
//}STUDENT;
//
////定义结构体变量
//STUDENT stu1,stu2;
// 
////初始化结构体 
//struct candicate arr[3]={
//		"li",0,"zhang",0,"wang",0  //没有; 
//	};   
//
////结构体指针变量作函参
//#include <stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//void Func(struct date *pt)
//{
//	pt->year=2000;
//	pt->month=5;
//	pt->day=22;
//}
//int main(void)
//{
//	struct date d;
//	d.year=1999;
//	d.month=4;
//	d.day=23;
//	printf("before:%d/%02d/%02d \n",d.year,d.month,d.day );
//	Func(&d);    //
//	printf("after:%d/%02d/%02d \n",d.year,d.month,d.day);
//	return 0;
//} 
 
//从函数返回结构体变量的值
#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
struct date Func(struct date pt)
{
	pt.year=2000;
	pt.day=5;
	pt.day =22;
	return pt;
}
int main(void)
{
	struct date d;
	d.year=1999;
	d.month=4;
	d.day=23;
	printf("before:%d/%02d/%02d \n",d.year,d.month,d.day );
	d=Func(d);
	printf("after:%d/%02d/%02d \n",d.year,d.month,d.day);
	return 0;
} 

