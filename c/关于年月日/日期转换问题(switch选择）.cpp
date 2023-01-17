#include <stdio.h>
int eDay[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
// 函数功能：  对给定的某年某月某日，计算它是这一年的第几天
int  DayofYear(int year, int month, int day);
// 函数功能：    对给定的某一年的第几天，计算它是这一年的第几月第几日
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
int main(void){
	int y,m,d,yd,py,pd;
	printf("1. year/month/day -> yearDay\n");
	printf("2. yearDay -> year/month/day\n");
	printf("3. Exit\n");
	printf("Please enter your choice:");
	int flag;
	scanf("%d",&flag);
	switch (flag){
		case 1:
			printf("Please enter year, month, day:");
			scanf("%d,%d,%d",&y,&m,&d);
			printf("yearDay = %d\n",DayofYear(y,m,d));
			break;
		case 2:
			printf("Please enter year, yearDay:");
			scanf("%d,%d",&y,&yd);
			MonthDay(y,yd,&py,&pd);
			printf("month = %d,day = %d\n",py,pd);
			break;
	}
		
	return 0;
}
int  DayofYear(int year, int month, int day){
	int leap=(year%4==0&&year%100!=0||year%400==0);
	int i,sum=0;
	for(i=1;i<month;i++){
		sum+=eDay[leap][i];
	}
	sum+=day;
	return sum;
}
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay){
	int leap=(year%4==0&&year%100!=0||year%400==0);
	float sum=0.0,left=yearDay;
	int i,cout=1;
	for(i=1;i<=12;i++){
		left-=eDay[leap][i];
		cout++;
		if(left<eDay[leap][i+1]) break;
	}
	*pMonth=cout;
	*pDay=left;
}
