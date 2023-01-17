#include <stdio.h>
struct date_rec{
	int day;
	int month;
	int year;
};
int arr[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30},{0,31,29,31,30,31,30,31,31,30,31,30}};
//输入current_date的值
void input_date(struct date_rec *current_date);
//将current_date增加1天
void increment_date(struct date_rec *current_date);
//显示current_date的值
void output_date(struct date_rec *current_date);
int main(void){
	struct date_rec current_date;
	input_date(&current_date);
	increment_date(&current_date);
	output_date(&current_date);
	return 0;
}
void input_date(struct date_rec *current_date){
	printf("请输入当前日期（年 月 日）："); 
	scanf("%d%d%d",&current_date->year,&current_date->month,&current_date->day); //
}
void increment_date(struct date_rec *current_date){
	current_date->day++;
	int leap=current_date->year%4==0&&current_date->year%100!=0||current_date->year%400==0; 
	if(current_date->day>arr[leap][current_date->month]){
		current_date->month++;
		current_date->day=1; //易忘 
		if(current_date->month>12){
			current_date->year++;
			current_date->month=1;
		}
	}
}
void output_date(struct date_rec *current_date){
	printf("当前日期：%d年%d月%d日！",current_date->year,current_date->month,current_date->day);
}
