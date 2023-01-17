#include <stdio.h>

int main(void){
	int year,month,day,sum=0,y=0,m=0,d=0;
	int i[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//建立平年各月份天数的数组
	int j[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//建立闰年各月份天数的数组

	scanf("%4d-%2d-%2d",&year,&month,&day);
	if(year<1990||month<1||month>12||day>j[month]||(month==2&&(!(year%4==0&&year%100!=0||year%400==0))&&day>28)){
		printf("Invalid input.");
	} else {
		for(int n=year;n>1990;n--)
		{
			if(n%4==0&&n%100!=0||n%400==0) y+=366;
		    else y+=365;
	    }
		
//	    for(int n=month;n>1;n--)
//		{
//			if(year%4==0&&year%100!=0||year%400==0)	m+=j[n-1];
//		     else m+=i[n-1];
//		}
	}
	
	for(int a=1;a<month;a++)//加上所隔月份天数
	{
		if((year%400==0)||(year%4==0&&year%100!=0)) 
		{
			sum+=j[a];//闰年月数
		}
		else{
			sum+=i[a];//平年月数
		}
	}

	d=day;
	sum=y+m+d;
//	if((sum%5)>3||(sum%5)==0){
//		printf("He is having a rest.");
//	} else {
//		printf("He is working.");
//	}
    if((sum%5==1)||(sum%5==2)||(sum%5==3))	printf("He is working.");
    else printf("He is having a rest."); 
    return 0;
}
