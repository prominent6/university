#include <stdio.h>
struct date_rec{
	int day;
	int month;
	int year;
};
int arr[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30},{0,31,29,31,30,31,30,31,31,30,31,30}};
//����current_date��ֵ
void input_date(struct date_rec *current_date);
//��current_date����1��
void increment_date(struct date_rec *current_date);
//��ʾcurrent_date��ֵ
void output_date(struct date_rec *current_date);
int main(void){
	struct date_rec current_date;
	input_date(&current_date);
	increment_date(&current_date);
	output_date(&current_date);
	return 0;
}
void input_date(struct date_rec *current_date){
	printf("�����뵱ǰ���ڣ��� �� �գ���"); 
	scanf("%d%d%d",&current_date->year,&current_date->month,&current_date->day); //
}
void increment_date(struct date_rec *current_date){
	current_date->day++;
	int leap=current_date->year%4==0&&current_date->year%100!=0||current_date->year%400==0; 
	if(current_date->day>arr[leap][current_date->month]){
		current_date->month++;
		current_date->day=1; //���� 
		if(current_date->month>12){
			current_date->year++;
			current_date->month=1;
		}
	}
}
void output_date(struct date_rec *current_date){
	printf("��ǰ���ڣ�%d��%d��%d�գ�",current_date->year,current_date->month,current_date->day);
}
