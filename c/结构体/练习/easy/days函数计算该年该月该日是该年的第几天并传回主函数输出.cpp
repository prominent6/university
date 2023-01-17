#include <stdio.h>
struct Date{
	int year;
	int month;
	int day;
} date;
int arr[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30},
{0,31,29,31,30,31,30,31,31,30,31,30}};
int days(struct Date *date);
int main(void){
	printf("请输入日期（年，月，日）\n");
	scanf("%d,%d,%d",&date.year ,&date.month ,&date.day );
	printf("\n%d月%d日是%d年的第%d天。",date.month,date.day,date.year,days(&date));
	return 0;
}
int days(struct Date *date){
	int leap=date->year%4==0&&date->year%100!=0||date->year%400==0;
	int i;
	int sum=date->day;
	for(i=1;i<date->month;i++){
		sum+=arr[leap][i];
	}
	return sum;
}
