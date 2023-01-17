//可以实现函数返回多个值 
#include <stdio.h>
int day[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
//定义在全局中 
//函数功能：    对给定的某一年的第几天，计算它是这一年的第几月第几日
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
int main(void){
	int y,yd;
	int py,pd;
	printf("Please enter year, yearDay:");
	scanf("%d,%d",&y,&yd);
	MonthDay(y,yd,&py,&pd);  //传入的实参 
	printf("month = %d, day = %d\n",py,pd);
	return 0;
}
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay){
	int i,leap;
	leap=(year%4==0&&year%100!=0||year%400==0);
	int cout=1,left=yearDay;
	for(i=1;i<12;i++){
		left-=day[leap][i];
		cout++;
		if(left<day[leap][i+1]) break;
	} 
	*pMonth=cout; //将计算出的月份值赋值给pMonth所指的变量 
	*pDay=left;   //将计算出的日号赋值给pDay所指的变量 
 }
