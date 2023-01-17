#include<stdio.h>
int main()
{
	int year,month,day,x,a;
	int ye=1990;
	int sum=0;
	int i[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//建立平年各月份天数的数组
	int j[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//建立闰年各月份天数的数组
	scanf("%4d-%2d-%2d",&year,&month,&day);
//输入日期
	
//	year=x/10000;
//	month=(x%10000)/100;
//	day=x%100;
	
//	while((year<1990)||(month<1||month>12)||((month==2&&(year%4!=0&&year%400!=0)&&day>28)||(day>j[month])))
//	{
//		printf("输入日期错误，请重新输入\n");
//		printf("请按照年月日的顺序重新输入日期\n");
//		scanf("%d",&x);
//			year=x/10000;
//	        month=(x%10000)/100;
//	        day=x%100;
//	}//判断输入日期是否正确
if(year<1990||month<1||month>12||day>j[month]||(month==2&&(!(year%4==0&&year%100!=0||year%400==0))&&day>28)){
		printf("Invalid input.");
	} else{
	for(;ye<year;ye++) //加上所隔年份天数
	{
		if((year%400==0)||(year%4==0&&year%100!=0))//判断此年份是否是闰年 
		{
			sum+=366;//闰年总数加366
		}
		else
		{
			sum+=365;//平年总数加365
		}
	}
	for(a=1;a<month;a++)//加上所隔月份天数
	{
		if((year%400==0)||(year%4==0&&year%100!=0)) 
		{
			sum+=j[a];//闰年月数
		}
		else{
			sum+=i[a];//平年月数
		}
	}
}
	sum+=day;
	if((sum%5==1)||(sum%5==2)||(sum%5==3))	printf("He is working.");
    else printf("He is having a rest."); 
	return 0;
}
