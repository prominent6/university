#include <stdio.h>

int main(void){
	int year,month,day,answer=0;
    scanf("%d%d%d",&year,&month,&day);
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days2[12]={31,29,31,30,31,30,31,31,30,31,30,31} ;
    if(year%4==0&&year%100!=0||year%400==0){
    	for(int i=1;i<month;i++){
    	     answer+=days2[i-1];
		}
    	printf("%d",answer+day);
	} else {
		for(int i=1;i<month;i++){
    	     answer+=days[i-1];
		}
    	printf("%d",answer+day);
	}
    return 0;
}
