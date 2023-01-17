#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
int main(void){
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	struct date d; //
	printf("请输入日期（年，月，日）\n");
	scanf("%d,%d,%d",&d.year,&d.month,&d.day);
	int dday=d.day,i;
	for(i=1;i<d.month;i++){
		dday+=days[i];
	}
	if(d.year%4==0&&d.year%100!=0||d.year%400==0&&d.month>=2){
		dday+=1;
	}
	printf("\n%d月%d日是%d年的第%d天。",d.month,d.day,d.year,dday);
	return 0;
}
