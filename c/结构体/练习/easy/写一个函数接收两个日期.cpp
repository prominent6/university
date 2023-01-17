#include <stdio.h>
struct date_rec{
	int day;
	int month;
	int year;
};
int func(struct date_rec arr[]){
	int i,flag=0;
	if(arr[0].year > arr[1].year) //用if-else 
		return 1;	
	else if(arr[0].year < arr[1].year)
		return -1;
	else 
	{
		if(arr[0].month > arr[1].month)
			return 1;
		else if(arr[0].month < arr[1].month)
			return -1;
		else 
		{
			if(arr[0].day > arr[1].day)
				return 1;
			else if(arr[0].day < arr[1].day)
				return -1;
			else 
				return 0;
		}
	}
}
int main(void){
	struct date_rec arr[2];
	int i;
	for(i=0;i<2;i++){
		printf("请输入当前日期（年 月 日）：");
		scanf("%d%d%d",&arr[i].year,&arr[i].month,&arr[i].day);
	}
	for(i=0;i<2;i++){
		printf("当前日期：%d年%d月%d日！\n",arr[i].year,arr[i].month,arr[i].day);
	}
	int r=func(arr);
	if(r==0) printf("两个日期相同！");
	else if(r==1) printf("第一个日期晚于第二个日期！");
	else printf("第一个日期早于第二个日期！") ;
	return 0;
}
