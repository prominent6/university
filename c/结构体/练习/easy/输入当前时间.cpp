	//ע���ٽ����23��59��59
#include <stdio.h>
struct time_rec{
	int hours;
	int mins;
	int secs;
};
//����current_time��ֵ
void input_time(struct time_rec *current_time); //�β� 
//��current_time����1��
void increment_time(struct time_rec *current_time);
//��ʾcurrent_time����ֵ
void output_time(struct time_rec *current_time);
int main(void){
	struct time_rec current_time;
	input_time(&current_time); //ʵ�� 
	increment_time(&current_time);
	output_time(&current_time);
	return 0;
}
void input_time(struct time_rec *current_time){
	printf("�����뵱ǰʱ�䣨ʱ �� �룩��");
	scanf("%d%d%d",&current_time->hours,&current_time->mins,&current_time->secs);
}
void increment_time(struct time_rec *current_time){
	(current_time->secs)++;
	//ע���ٽ����23��59��59 
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
	printf("��ǰʱ�䣺%dʱ%d��%d�룡",current_time->hours,current_time->mins,current_time->secs);
}
