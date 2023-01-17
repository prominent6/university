	//注意临界情况23：59：59
#include <stdio.h>
struct time_rec{
	int hours;
	int mins;
	int secs;
};
//输入current_time的值
void input_time(struct time_rec *current_time); //形参 
//将current_time增加1秒
void increment_time(struct time_rec *current_time);
//显示current_time的新值
void output_time(struct time_rec *current_time);
int main(void){
	struct time_rec current_time;
	input_time(&current_time); //实参 
	increment_time(&current_time);
	output_time(&current_time);
	return 0;
}
void input_time(struct time_rec *current_time){
	printf("请输入当前时间（时 分 秒）：");
	scanf("%d%d%d",&current_time->hours,&current_time->mins,&current_time->secs);
}
void increment_time(struct time_rec *current_time){
	(current_time->secs)++;
	//注意临界情况23：59：59 
	if(current_time->secs==60){
		(current_time->mins)++;
		(current_time->secs)=0;
		if(current_time->mins==60){
			(current_time->hours)++;
	     	(current_time->mins)=0;
		}
		if(current_time->hours==24){
			current_time->hours=0;
		}
	}
}
void output_time(struct time_rec *current_time){
	printf("当前时间：%d时%d分%d秒！",current_time->hours,current_time->mins,current_time->secs);
}
